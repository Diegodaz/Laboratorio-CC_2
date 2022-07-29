#include <iostream>
#include <string>

//WINDOWS
class WinFactory {
public:
	virtual ~WinFactory() {};
	virtual std::string Draw() const = 0;
};
class WinButton : public WinFactory {
public:
	std::string Draw() const override {
		return "Dibujando Button Windows";
	}
};
class WinCheckBox : public WinFactory {
	std::string Draw() const override {
		return "Dibujando CheckBox Windows";
	}
};

//MAC
class MacFactory {
public:
	virtual ~MacFactory() {};
	virtual std::string Draw() const = 0;
	virtual std::string draw(const WinFactory& colaborador) const = 0;
};
class MacButton : public MacFactory {
public:
	std::string Draw() const override {
		return "Dibujando Button Mac";
	}
	std::string draw(const WinFactory& colaborador) const
		override {
		const std::string result = colaborador.Draw();
		return "Mac Button con ayuda de " + result;
	}
};
class MacCheckBox : public MacFactory {
public:
	std::string Draw() const override {
		return "Dibujando CheckBox Mac";
	}
	std::string draw(const WinFactory& colaborador) const
		override {
		const std::string result = colaborador.Draw();
		return "Mac Button con ayuda de " + result;
	}
};




//LINUX
class LinuxFactory {
public:
	virtual ~LinuxFactory() {};
	virtual std::string Draw() const = 0;
};
class LinuxButton : public LinuxFactory {
public:
	std::string Draw() const override {
		return "Dibujando Button Linux";
	}
};
class LinuxCheckBox : public LinuxFactory {
	std::string Draw() const override {
		return "Dibujando CheckBox Linux";
	}
};


//GUI
class GUIFactory {
public:
	virtual WinFactory* CrearControlW() const = 0;
	virtual MacFactory* CrearControlM() const = 0;
	virtual LinuxFactory* CrearControlL() const = 0;
};
//FACTORYS
class Button : public GUIFactory {
public:
	WinFactory* CrearControlW() const override {
		return new WinButton();
	}
	MacFactory* CrearControlM() const override {
		return new MacButton();
	}
	LinuxFactory* CrearControlL() const override {
		return new LinuxButton();
	}
};
class CheckBox : public GUIFactory {
public:
	WinFactory* CrearControlW() const override {
		return new WinCheckBox();
	}
	MacFactory* CrearControlM() const override {
		return new MacCheckBox();
	}
	LinuxFactory* CrearControlL() const override {
		return new LinuxCheckBox();
	}
};

//CLIENTE (Application)
void Application(const GUIFactory& f, int os) {
	const WinFactory* producto_a = f.CrearControlW();
	const MacFactory* producto_b = f.CrearControlM();
	const LinuxFactory* producto_c= f.CrearControlL();

	if (os == 1) std::cout << producto_a->Draw() << "\n";
	
	if (os == 2) std::cout << producto_b->Draw() << "\n";
	
	if (os == 3) std::cout << producto_c->Draw() << "\n";
	
	delete producto_a;
	delete producto_b;
	delete producto_c;
}
int main() {
	std::cout << "Cliente: Windows "<<std::endl;
	Button* f1 = new Button();
	Application(*f1, 1); // 1 - Windows
	delete f1;
	std::cout << std::endl;
	std::cout << "Cliente: Mac "<<std::endl;
	Button* f2 = new Button();
	Application(*f2, 2); // 2 - Mac
	delete f2;
	std::cout << std::endl;
	std::cout << "Cliente: Linux " << std::endl;
	CheckBox* f3 = new CheckBox();
	Application(*f3, 3); // 3 - Linux
	delete f3;
	return 0;
}