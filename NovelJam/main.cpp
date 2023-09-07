#include <cmath>
#include <chrono>
#include <SFML/Main.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
struct {
    wchar_t bent = L'þ';
    wchar_t you = L'ý';
    wchar_t klark = L'ú';
    wchar_t dumki = L'×';
};
//#include "Header.h"
std::wstring txt[12] =
{ LR"(þТи взяв мішки для трупів?
@ýБенте, який же ти песиміст, гадаєш знову код-200? Поставив я зустрічне запитання, намагаючись прикрасити довгу поїздку розмовою.
@þРік, а ти сам як думаєш? - Буркнув Бент. - Після передозування апаратом ТАР інакше ніяк. 
@þТак що із мішками?
@ýТа є твої мішки, ти краще скажи, що там показує паспорт апарату?
@þДо втрати синхронізації з мозком він пропрацював 20 годин.
@ýТа ну! У 2 рази перевищив критичний рівень… І що їм не вистачає у житті, невже симуляція краща?
@×Я не чекав відповіді на це питання, вона лежала на поверхні.
@×Світова економіка зазнає краху, стрімкий ріст безробіття, компанії банкротяться одна за одною і тут корпорація ‘Секонд Лайф’ презентує апарат Tabula rasa, який занурює користувача у симуляцію. 
@×Тепер не потрібно ходити на роботу, зависати з друзями в барі, це все тепер у симуляції. Навіть віртуальна валюта є. Добувається мозком, доки користуєшся апаратом.
@×Пейзажі за вікном почали сповільнюватися, вириваючи мене із роздумів.
@ýЧому ми зупинились?
)",
LR"(þЗачекай но хвилинку.
@×Мій напарник вийшов із машини і тоді я зрозумів причину нашої зупинки. 
■@×На дорозі був згорнутий у клубок маленький їжачок. Бент спробував його підняти, але одразу ж відсахнувся, облизуючи палець. 
@×Зібравшись із силами він спустив рукава й доправив їжачка на іншу сторону вулиці у траву.
)",
LR"(ýЯ й не знав, що ти в нас такий добряк.
@×Бент нічого не відповів і ми поїхали далі.)",
LR"(■þДо роботи.
@×Перебив тишу мій напарник. 
@þТвоя черга возитись із тілом, тому я беру на себе паперову роботу.
@ýУ мене кращий почерк, давай може я? До того ж я тільки поїв перед від’їздом.
@þТи вже забув, як сам запропонував чергуватись? Тому не скигли і приступай до діла.
@×Не в змозі переконати Бента я дістав із сумки мішок для трупів, натягнув рукавички і направився до жертви ТАР-у.
@×Тіло байдужо лежало на землі, неначе чекаючи на мене. На дотик воно було мертвенно крижане, із неймовірно широкою усмішкою, яка застигла на обличчі назавжди. 
@×Було в ній щось лячне.
@ýСподіваюсь воно було того варте. 
@×Промовив я до тіла, але відповідь не отримав.
)",
LR"(■×Я зняв апарат з голови мерця та поклав його в сумку. 
@×Важливим етапом нашої роботи є повернення таких пристроїв TАР назад в офіс, звідки вони йдуть на тестування, огляд і повертаються на прилавок магазинів. 
@×Я повернувся до тіла та загорнув його в мішок, застібнув змійку.
@þЗакінчив тут? Давай допоможу віднести його в машину.
)",
LR"(×Ми повантажили мерця в машину й поїхали назад в офіс.)",
LR"(ýНе хочеш після роботи зайти в бар на келих другий пінного?
@þСьогодні не можу, мені потрібно встигнути пройтися по крамницям.
@ýМмм, невже ти нарешті наважився змінити цю безглузду сорочку?
@þЦю сорочку мені подарувала дружина, вона не безглузда! 
@þІ змінювати її тільки тому, що вона тобі не до вподоби я не збираюсь.
@ýІ на що ти тоді проміняєш компанію свого найкращого друга?
@þУ нас із Карен завтра річниця, тому я поїду за подарунком.
@ýЦе вже скільки вона тебе терпить? 5 років?
@þБуде 7 рік, як ми разом.
@ýВитримці цієї жінки можна тільки позаздрити, переказуй їй мої вітання.
@þПрозвучало, наче я якийсь тиран.
@ýДоречі раз ти займався паперовою роботою, тобі й заносити апарат. 
@×Я дістав ТАР із сумки та поклав його в бардачок машини Бента.
)",
LR"(×Приїхавши в офіс ми передали тіло ґрачам, (так ми називаємо людей, які займаються кремацією) після чого Бент підійшов до мене з папкою паперів.
■@þЗанесеш це до мене на стіл? Крамниці скоро зачиняються, мушу їхати.
@ýЗачекай, а як же звіт? До того ж тобі потрібно здати ТАР, ти не забув?
@þЦе все зачекає. А річниця чекати не буде, вона раз на рік.
@ýМені холостяку це не зрозуміти, давай сюди свої папери. Дивись не напартач із подарунком.
@×Бент кивнув головою на знак подяки та попрямував швидким кроком до машини.
@ýСьогодні дружина, завтра діти. Єдиний друг і того можу лишитися. 
@×Мовив я в пустоту і обнявши папку з паперами, поплентався до стола Бента.
)",
LR"(×На столі панувала чистота, лежали обережно складені папки з паперами і стояла рамка із фотографією Карен, дружини Бента. 
@×Я лишив доручені мені бумаги на столі так, щоб власник одразу згадав, що їх треба заповнити та здати.
)",
LR"(×Після роботи я пішов в бар один, залив у себе декілька келихів пива та відправився у свій порожній дім.
@×За звичкою першим ділом перевірив автовідповідач,  як зазвичай, він виявився порожнім. Повечеряв розігрітими напівфабрикатами, набрав у ванну води, заплющив очі та занурився в неї.
)",
LR"(×Наступного дня відкривши двері офісу, я здивувався. 
@×Бента не було за столом, як зазвичай, а залишені мною папери лежали на тому ж місці. І тоді до мене підійшов один з робітників офісу.
■@×Ви Рік?
@ýТак. А ви..?
@úМене звати Кларк. Призначений вашим тимчасовим напарником, доки Бент буде відсутній. 
@úЧув ви з ним працюєте разом більше 2 років. В такому разі співчуваю.
@ýБент не такий вже й поганий напарник, не варто співчувати.
@úВважаю недоречним жартувати в такій ситуації, Ріку.
@ýЗ ним щось сталося?
@úА ви ще не чули? Безпосередньо з Бентом все впорядку, якщо можна так сказати, а ось його дружина.
@ýКларку, не тягніть сірка за хвіст, що з нею сталося?
@úМені не відомі подробиці. Я тільки чув що її збила машина, вона скінчилася дорогою до лікарні.
@ýЩо? Карен загинула?
@×Мене наче облили холодною водою. У них же сьогодні мала бути річниця. Чому це трапилось саме у такий день? 
@×Найжахливішим у цій ситуації було те, що я не знав як мені реагувати. 
@×Так Бент кликав мене кілька раз до себе на вечерю, Карен готувала нам різноманітні страви, вони були такі смачні, що я просив добавки. Але це ж не я був з нею одружений, не кохав її, ба навіть ми не були друзями. 
@×В моєму житті нічого не змінилося. Але ж мій напарник втратив близьку людину і йому боляче. Як я можу його підтримати? Що я маю сказати при зустрічі з ним?
@úРік, ви в порядку? 
@ýА? Так, все гаразд.
@úУ нас сьогодні 2 виклики, так що давайте не будем зволікати.
)",
LR"(×Наступні декілька годин я витав в емпіреях, періодично відволікаючись на короткі діалоги з моїм новим напарником та на холодні тіла чергових жертв ТАРу.
@×Після роботи, переступивши поріг свого будинку, я наважився зателефонувати Бенту.
@×Я набрав його номер, але у відповідь почув тільки автовідповідач.
)"
};
namespace bicycles
{    
    float GetScale()
    {
        float width = 3840.f / (float)sf::VideoMode::getDesktopMode().width;
        float height = 2160.f / (float)sf::VideoMode::getDesktopMode().height;
        float scale = width > height ? 1 / ceil(width) : 1 / ceil(height);
        return scale;
    };
    float scale_f = GetScale();
    float scale_i = 1 / GetScale();
}
int namePers = 0;
class View
{
    sf::Window* window;
    sf::FloatRect* view;
    sf::View camera;
    void autoCameraSetup(const sf::FloatRect& view, sf::Window& window)
    {
        camera.setViewport(view);
        camera.setSize(sf::Vector2f(
            window.getSize().x * view.width, window.getSize().y * view.height));
        camera.setCenter(sf::Vector2f(
            camera.getSize().x * 0.5f,
            camera.getSize().y * 0.5f));
    }
    void updateView()
    {
        autoCameraSetup(*view, *window);
    }
public:
    sf::View getView() { return camera; }
    void setWindow(sf::Window& window)
    {
        this->window = &window;
        updateView();
    }
    void setViewport(sf::FloatRect& view)
    {
        this->view = &view;
        updateView();
    }
    void setViewport(sf::FloatRect&& view)
    {
        this->view = &view;
        updateView();
    }
    View(sf::View& camera, sf::Window& window) :window(&window), camera(camera)
    {
        autoCameraSetup(camera.getViewport(), window);
    }
    View(sf::FloatRect& view, sf::Window& window) :window(&window), view(&view)
    {
        autoCameraSetup(view, window);
    }
    View(sf::FloatRect&& view, sf::Window& window) :window(&window), view(&view)
    {
        autoCameraSetup(view, window);
    }

    View(sf::Vector2f positions, sf::Vector2f size, sf::Window& window)
        :window(&window)
    {
        setViewport(sf::FloatRect(positions, size));
        autoCameraSetup(*view, window);
    }
    View(sf::Window& window) :window(&window)
    {
        view = nullptr;
    }
};

class LoadTexture
{       
public:
    const int countTextures;
    sf::Texture* textures;
    LoadTexture() = delete;
    explicit LoadTexture(std::string name[], int countTextures) 
        : countTextures(countTextures), textures(new sf::Texture[countTextures])
    {
        for (int index = 0; index < countTextures; index++)
            textures[index].loadFromFile(name[index]);
    }
    explicit LoadTexture(std::string name, int countTextures = 1)
        : countTextures(countTextures), textures(new sf::Texture[countTextures])
    {
        textures->loadFromFile(name);
    }
    explicit LoadTexture(const char* photo[], const uint64_t size[], int countTextures)
        : countTextures(countTextures), textures(new sf::Texture[countTextures])
    {
        for (int index = 0; index < countTextures; index++)
            textures[index].loadFromMemory(photo[index], size[index]);
    }
    explicit LoadTexture(const char* photo, const uint64_t size, int countTextures = 1)
        : countTextures(countTextures), textures(new sf::Texture[countTextures])
    {
        textures->loadFromMemory(photo, size);
    }
    ~LoadTexture()
    {
        delete[] textures;
    }
};

class CreateSprite
{
    std::string* fileName;
public:
    const int countSprite;
    LoadTexture texture{ fileName, countSprite };
    sf::Sprite* sprite;
    CreateSprite(std::string&& fileName, int countSprite)
        : countSprite(countSprite), fileName(&fileName), sprite(new sf::Sprite[countSprite])
    {
        for (int index = 0; index < countSprite; index++)
            sprite[index].setTexture(texture.textures[index]);
    }
    CreateSprite(std::string& fileName, int countSprite)
        : countSprite(countSprite), fileName(&fileName), sprite(new sf::Sprite[countSprite])
    {
        for (int index = 0; index < countSprite; index++)
            sprite[index].setTexture(texture.textures[index]);
    }
    CreateSprite(std::string* fileName, int countSprite)
        : countSprite(countSprite), fileName(fileName), sprite(new sf::Sprite[countSprite])
    {
        for (int index = 0; index < countSprite; index++)
            sprite[index].setTexture(texture.textures[index]);
    }
    ~CreateSprite()
    {
        delete[] sprite;
    }
};

struct Settings
{
    float volume;
    float speedText;
};
struct Save
{
    Settings settings;
    int сhoice;
    int background;
    int text;
    bool isSprite;
}save;

class Timer
{   /*Milliseconds*/
    uint64_t startTime = 0;
public:
    void start() { startTime = TimeNow(); }
    uint32_t getTime() { return CountTime(); }
    void reset() { start(); }
private:
    uint64_t TimeNow()
    {
        return std::chrono::high_resolution_clock::now().time_since_epoch().count();
    }
    uint32_t CountTime()
    {
        return static_cast<uint32_t>((TimeNow() - startTime) * 0.000001);
    }
};

struct
{
    float right;
    float down;
    float width;
    float height;
    void UpdateData()
    {
        right = ((float)sf::VideoMode::getDesktopMode().width * bicycles::scale_i - 3840.f) * 0.5f;
        down = ((float)sf::VideoMode::getDesktopMode().height * bicycles::scale_i - 2160.f) * 0.5f;

        width = right * 2;
        height = down * 2;
    }
}PosView{};
void UpdatingToMonitor(CreateSprite& sprite)
{
    for (int index = 0; index < sprite.countSprite; index++)
    {
        if (sprite.texture.textures[index].getSize().x > sf::VideoMode::getDesktopMode().width ||
            sprite.texture.textures[index].getSize().y > sf::VideoMode::getDesktopMode().height)
        {
            sprite.sprite[index].scale(bicycles::scale_f, bicycles::scale_f);
        }
    }
}
void UpdatingToMonitor(sf::Sprite* sprite, int countSprite)
{
    for (int index = 0; index < countSprite; index++)
    {
        sprite[index].scale(bicycles::scale_f, bicycles::scale_f);
    }
}
struct
{
    int index;
    sf::Vector2i sizeField;
    std::wstring text;
}TextToDraw{};
sf::Vector2i SizeField(sf::Text& fieldWidth, sf::Vector2f size)
{
    std::wstring text(L"Чи можливо сьогодні уявити наше життя без комп'ютерних технологій? Відповідь одна - ні і ще раз ні. Проте багато людей, використовуючи складну електронну операційну техніку, навіть не замислюються про те, що лежить в її основі.");
    fieldWidth.setString(text);
    while (true)
    {
        if (size.x > fieldWidth.getLocalBounds().width)
            break;
        else
        {
            text.resize(text.size() - 1);
            fieldWidth.setString(text);
        }
    }
    std::wstring txt(L"\n\n\n\n\n\n\n\n\n\n\n");
    fieldWidth.setString(txt);
    while (true)
    {
        if (size.y > fieldWidth.getLocalBounds().height)
            break;
        else
        {
            txt.resize(txt.size() - 1);
            fieldWidth.setString(txt);
        }
    }
    return sf::Vector2i((int)text.size() - 1, (int)txt.size());
}
std::wstring ProcessingText(std::wstring& text, sf::Vector2i size)
{
    int space = 0;
    int oldSpace = 0;
    int back = 0;
    std::vector<int> der{};
    for (size_t i = 0; i < text.size(); i++)
    {
        if (text[i] == L'\n')
        {
            back = oldSpace;
            continue;
        }
        if (text[i] == L' ')
        {
            oldSpace = space;
            space = (int)i;
        }
        if (space - back >= size.x)
        {
            back = oldSpace;
            der.push_back(oldSpace);
        }
    }
    for (size_t i = 0; i < der.size(); i++)
        text.replace(der[i], 1, L"\n");
    return text;
}
std::wstring DivisionText()
{
    int start = TextToDraw.index;
    for (int count = 0; TextToDraw.index < TextToDraw.text.size(); ++TextToDraw.index)
    {
        if (TextToDraw.text[TextToDraw.index] == L'×')
        {
            ++TextToDraw.index;
            namePers = -1;
            return TextToDraw.text.substr(start, TextToDraw.index - start - 1) == L"" ?
                DivisionText() : TextToDraw.text.substr(start, TextToDraw.index - start - 1);
        }
        if (TextToDraw.text[TextToDraw.index] == L'þ')
        {
            ++TextToDraw.index;
            namePers = 0;
            return TextToDraw.text.substr(start, TextToDraw.index - start - 1) == L"" ?
                DivisionText() : TextToDraw.text.substr(start, TextToDraw.index - start - 1);
        }
        if (TextToDraw.text[TextToDraw.index] == L'ý')
        {
            ++TextToDraw.index;
            namePers = 2;
            return TextToDraw.text.substr(start, TextToDraw.index - start - 1) == L"" ?
                DivisionText() : TextToDraw.text.substr(start, TextToDraw.index - start - 1);
        }
        if (TextToDraw.text[TextToDraw.index] == L'ú')
        {
            ++TextToDraw.index;
            namePers = 1;
            return TextToDraw.text.substr(start, TextToDraw.index - start - 1) == L"" ?
                DivisionText() : TextToDraw.text.substr(start, TextToDraw.index - start - 1);
        }
        if (TextToDraw.text[TextToDraw.index] == L'■')
        {
            ++TextToDraw.index;
            save.isSprite = true;
            return TextToDraw.text.substr(start, TextToDraw.index - start - 1) == L"" ?
                DivisionText() : TextToDraw.text.substr(start, TextToDraw.index - start - 1);
        }
        if (TextToDraw.text[TextToDraw.index] == L'@')
        {
            ++TextToDraw.index;
            return TextToDraw.text.substr(start, TextToDraw.index - start - 1) == L"" ?
                DivisionText() : TextToDraw.text.substr(start, TextToDraw.index - start - 1);
        }
        if (TextToDraw.text[TextToDraw.index] == L'\n') { ++count; }
        if (count >= TextToDraw.sizeField.y)
        {
            ++TextToDraw.index;
            break;
        }
    }
    return TextToDraw.text.substr(start, TextToDraw.index - start);
}
std::wstring BackText(std::wstring& drawText, sf::Text& Text, bool newString = false)
{
    if (TextToDraw.text[TextToDraw.index - 1] == L'@' ||
        TextToDraw.text[TextToDraw.index - 1] == L'\n' ||
        TextToDraw.text[TextToDraw.index - 1] == L'■')
    {
        TextToDraw.index -= 2;
    }
    for (int count = 0; TextToDraw.index <= TextToDraw.text.size()
        && TextToDraw.index > 0; --TextToDraw.index)
    {
        if (TextToDraw.text[TextToDraw.index] == L'■')
        {
            save.isSprite = false;
            continue;
        }
        if (TextToDraw.text[TextToDraw.index] == L'@')
        {
            if (newString)
            {
                save.text = TextToDraw.index;
                drawText.resize(0);
                Text.setString(L"");
                return DivisionText();
            }
            else
            {
                --TextToDraw.index;
                return BackText(drawText, Text, true);
            }
        }
        if (TextToDraw.text[TextToDraw.index] == L'\n') { ++count; }
        if (count >= TextToDraw.sizeField.y)
        {
            if (newString)
            {
                ++TextToDraw.index;
                return DivisionText();
            }
            else
            {
                TextToDraw.index = (int)TextToDraw.text.find(drawText, drawText.size());
                return BackText(drawText, Text, true);
            }
        }
    }
    if (TextToDraw.index == 0 && save.background > 0)
    {
        --save.background;
        TextToDraw.text = txt[save.background];
        TextToDraw.index = TextToDraw.text.size();
        drawText.clear();
        drawText.push_back(L'\n');
        return BackText(drawText, Text);
    }
    save.text = TextToDraw.index;
    drawText.resize(0);
    Text.setString(L"");
    return DivisionText();
}
sf::Vector2f CoordToScreen(sf::Vector2f&& coord)
{
    return coord * bicycles::scale_f;
}
sf::Vector2f CoordToScreen(sf::Vector2f& coord)
{
    return coord * bicycles::scale_f;
}
sf::Vector2f CoordToScreen(float x, float y)
{
    sf::Vector2f coord(x, y);
    return coord * bicycles::scale_f;
}
sf::Vector2i CoordToScreen(int x, int y)
{
    sf::Vector2f coord(x, y);
    return sf::Vector2i(coord * bicycles::scale_f);
}
sf::Vector2f CoordToOne(sf::Vector2f coord)
{
    sf::Vector2f result = sf::Vector2f(coord.x / 3840.f * bicycles::scale_i,
        coord.y / 2160.f * bicycles::scale_i);
    return result;
}
int indexBackgraund(int index)
{
    enum indexBack
    {
        bg_first_1,
        bg_second_2,
        bg_first_3,
        bg_vRoom2_4,
        bg_vRoom1_5,
        black_6,
        bg_first_7,
        bg_officeMain_8,
        bg_officeRoom_9,
        black_10,
        bg_officeRoom_11,
        black_12
    };
    if (index == bg_first_1)
        index = 0;
    if (index == bg_second_2)
        index = 1;
    if (index == bg_first_3)
        index = 0;
    if (index == bg_vRoom2_4)
        index = 2;
    if (index == bg_vRoom1_5)
        index = 3;
    if (index == black_6)
        index = 6;
    if (index == bg_first_7)
        index = 0;
    if (index == bg_officeMain_8)
        index = 5;
    if (index == bg_officeRoom_9)
        index = 4;
    if (index == black_10)
        index = 6;
    if (index == bg_officeRoom_11)
        index = 4;
    if (index == black_12)
        index = 6;
    if (index == 12)
        index = 7;
    return index;
}
void ScrolingText(std:: wstring& drawText, std::wstring* txt, sf::Text& text)
{
    if (save.text <= drawText.size())
    {
        text.setString(drawText);
        save.text = (int)drawText.size();
    }
    else
    {
        if (TextToDraw.index < TextToDraw.text.size())
        {
            drawText = DivisionText();
            save.text = 0;
        }
        else
        {
            save.text = 0;
            save.isSprite = false;
            ++save.background;
            if (save.background >= 12)
            {
                save.background = 12;
                return;
            }
            TextToDraw.index = 0;
            TextToDraw.text.reserve(0);
            TextToDraw.text = txt[save.background];
            drawText = DivisionText();
            text.setString(drawText.substr(0, save.text));
        }
    }
}
int main()
{
    PosView.UpdateData();
    sf::RenderWindow window;
    window.create(sf::VideoMode::getDesktopMode(), "SecondLife", sf::Style::Fullscreen);
    std::string fileBG[8]{
    "VN\\BG\\bg_first.png",
    "VN\\BG\\bg_second.png",
    "VN\\BG\\bg_vRoom2.png",
    "VN\\BG\\bg_vRoom1.png",
    "VN\\BG\\bg_officeRoom.png",
    "VN\\BG\\bg_officeMain.png",
    "VN\\BG\\bg_dark.png",
    "VN\\BG\\bg_end.png"
    };
    CreateSprite background(fileBG, 8);
    UpdatingToMonitor(background);

    std::string fileSprite[4]{
        "VN\\Sprites\\s_bend_idle.png",
        "VN\\Sprites\\s_hengehog.png",
        "VN\\Sprites\\s_Klark_idle.png",
        "VN\\Sprites\\s_aparat.png"
    };
    CreateSprite creature(fileSprite,4);
    UpdatingToMonitor(creature);

    std::string fileUI[3]{
    "VN\\UI\\ui_textBg.png",
    "VN\\UI\\ui_menuBg.png",
    "VN\\UI\\ui_infoBg.png"
    };
    CreateSprite UI(fileUI, 3);
    UpdatingToMonitor(UI);

    View Game(
        CoordToOne(CoordToScreen(PosView.right, PosView.down)),
        CoordToOne(CoordToScreen(3840.f - PosView.width, 2160.f - PosView.height)), window);

    sf::Font font;
    font.loadFromFile("VN\\Font\\font.ttf");

    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(24);     
    text.setPosition(CoordToScreen(550.f, 1750.f));   
    TextToDraw.sizeField = SizeField(text, CoordToScreen(2400.f, 410.f));
    for (size_t i = 0; i < 12; i++)
    {
        ProcessingText(txt[i], TextToDraw.sizeField);
    }
    TextToDraw.index = 0;
    TextToDraw.text = txt[0];

    Timer time;
    time.start();

    sf::SoundBuffer soundBuffer;
    soundBuffer.loadFromFile("VN\\sfx\\sfx_headgehog_sniffing.flac");
    sf::Sound sound;
    sound.setBuffer(soundBuffer);
    save.settings.volume = 25;
    sf::Music music;
    music.openFromFile("VN\\music\\game.ogg");
    music.setVolume(save.settings.volume);
    bool der = true;
    save.background = 0;
    save.text = 0;
    save.settings.speedText = 30;
    bool isPressent = false;
    //TextToDraw.index = save.text;
    //TextToDraw.text = txt[save.background];
    std::wstring drawText = DivisionText();
    //ScrolingText(drawText, txt, text);
    bool menu = true;

    std::string FileMenu[2]{
        "VN\\UI\\ui_main_menu.png",
        "VN\\UI\\my_ui.png" };
    LoadTexture texture_menu(FileMenu, 2);
    sf::Sprite menus(texture_menu.textures[0]);
    menus.scale(bicycles::scale_f, bicycles::scale_f);
    sf::Sprite menus_ui[6];
    sf::Sprite menus_ui_click[6];
    sf::Sprite namesPerson[3];
    sf::Sprite stringMenu[2];
    sf::Sprite valueSetting[10];
    sf::Sprite LeftRight[4];
    sf::Sprite endString;
    for (size_t i = 0; i < 6; i++)
    {
        menus_ui[i].setTexture(texture_menu.textures[1]);
        if (i == 2)
            menus_ui[i].setTextureRect(sf::IntRect(0, 120 * i + 2, 1070, 110));
        else
            menus_ui[i].setTextureRect(sf::IntRect(0, 120 * i, 1070, 120));
        menus_ui[i].scale(bicycles::scale_f, bicycles::scale_f);
        menus_ui[i].setPosition(CoordToScreen(240.f, 800.f + (203.f * i)));
    }
    for (size_t i = 0; i < 6; i++)
    {
        menus_ui_click[i].setTexture(texture_menu.textures[1]);
        menus_ui_click[i].setTextureRect(sf::IntRect(1071, 203 * i, 1071, 203));
        menus_ui_click[i].scale(bicycles::scale_f, bicycles::scale_f);
        menus_ui_click[i].setPosition(CoordToScreen(240.f, 800.f + (203.f * i)));
    }
    for (size_t i = 0; i < 3; i++)
    {
        namesPerson[i].setTexture(texture_menu.textures[1]);
        namesPerson[i].setTextureRect(sf::IntRect(2142, 74 * i, 280, 73));
        namesPerson[i].scale(1.2f * bicycles::scale_f, 1.2f * bicycles::scale_f);
        namesPerson[i].setPosition(CoordToScreen(620.f, 1570.f));
    }
    for (size_t i = 0; i < 2; i++)
    {
        stringMenu[i].setTexture(texture_menu.textures[1]);
        stringMenu[i].setTextureRect(sf::IntRect(2770, 74 * i, 705, 72));
        stringMenu[i].scale(bicycles::scale_f, bicycles::scale_f);
        stringMenu[1].setPosition(CoordToScreen(2080.f, 775.f));
        stringMenu[0].setPosition(CoordToScreen(1860.f, 950.f));
    }
    for (size_t i = 0; i < 10; i++)
    {
        valueSetting[i].setTexture(texture_menu.textures[1]);
        valueSetting[i].setTextureRect(sf::IntRect(3475, 130 * i, 365, 130));
        valueSetting[i].scale(bicycles::scale_f, bicycles::scale_f);
        valueSetting[i].setPosition(CoordToScreen(3000.f, 760.f));
    }
    for (size_t i = 0; i < 4; i++)
    {
        LeftRight[i].setTexture(texture_menu.textures[1]);
        LeftRight[i].setTextureRect(sf::IntRect(121 * int(i / 2), 2100, 121, 60));
        LeftRight[i].scale(bicycles::scale_f, bicycles::scale_f);
        if (i == 1 || i == 2)
            LeftRight[i].setPosition(CoordToScreen(2870.f, 770.f));
        else
            LeftRight[i].setPosition(CoordToScreen(2870.f, 945.f));
        if (i == 2 || i == 3)
            LeftRight[i].move(CoordToScreen(500.f, 0.f));
    }
    endString.setTexture(texture_menu.textures[1]);
    endString.setTextureRect(sf::IntRect(3790, 2130, 3840, 2160));
    endString.scale(bicycles::scale_f, bicycles::scale_f);
    endString.setPosition(CoordToScreen(3000.f, 2075.f));
    window.setView(Game.getView());
    bool settingMenu = false;
    
    sf::SoundBuffer bbufer;
    bbufer.loadFromFile("VN\\sfx\\click.ogg");
    sf::Sound click(bbufer);

    sf::Music menuMusic;
    menuMusic.openFromFile("VN\\music\\mainMenu.ogg");
    menuMusic.play();
    menuMusic.setLoop(true);
    menuMusic.setVolume(save.settings.volume);
    music.setLoop(true);
    bool infoBag = false;
    while (window.isOpen() && menu == true)
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::MouseButtonPressed && !isPressent)
            {
                isPressent = true;
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    for (size_t i = 0; i < 6; i++)
                    {
                        if (menus_ui[i].getGlobalBounds().
                            contains(window.mapPixelToCoords(sf::Mouse::getPosition())))
                        {
                            if (i == 0)
                            {
                                click.play();
                                menuMusic.stop();
                                music.play();
                                menu = false;
                                isPressent = false;
                            }
                            if (i == 3)
                            {
                                click.play();
                                settingMenu = !settingMenu;
                                infoBag = false;
                            }
                            if (i == 4)
                            {
                                click.play();
                                infoBag = !infoBag;
                                settingMenu = false;
                            }
                            if (i == 5)
                            {
                                click.play();
                                window.close();
                            }
                        }
                    }
                }
                if (settingMenu)
                {
                    if (LeftRight[1].getGlobalBounds().
                        contains(window.mapPixelToCoords(sf::Mouse::getPosition())))
                    {          
                        click.play();
                        save.settings.volume -= save.settings.volume > 0 ? 5 : 0;
                        music.setVolume(save.settings.volume);
                        sound.setVolume(save.settings.volume * 2);
                        click.setVolume(save.settings.volume);
                        menuMusic.setVolume(save.settings.volume);
                    }

                    if (LeftRight[2].getGlobalBounds().
                        contains(window.mapPixelToCoords(sf::Mouse::getPosition())))
                    {
                        click.play();
                        save.settings.volume += save.settings.volume < 50 ? 5 : 0;
                        music.setVolume(save.settings.volume);
                        sound.setVolume(save.settings.volume * 2);
                        click.setVolume(save.settings.volume);
                        menuMusic.setVolume(save.settings.volume);
                    }
                    if (LeftRight[3].getGlobalBounds().
                        contains(window.mapPixelToCoords(sf::Mouse::getPosition())))
                    {
                        click.play();
                        save.settings.speedText -= save.settings.speedText > 0 ? 10 : 0;
                    }
                    if (LeftRight[0].getGlobalBounds().
                        contains(window.mapPixelToCoords(sf::Mouse::getPosition())))
                    {
                        click.play();
                        save.settings.speedText += save.settings.speedText < 100 ? 10 : 0;
                    }
                }
            }
            if (event.type == sf::Event::MouseButtonReleased)
                isPressent = false;
        }
        window.clear();
        window.draw(menus);
        for (size_t i = 0; i < 6; i++)
        {
            if (menus_ui[i].getGlobalBounds().
                contains(window.mapPixelToCoords(sf::Mouse::getPosition())))
            {
                menus_ui_click[i].setPosition(menus_ui[i].getPosition().x,
                    menus_ui[i].getPosition().y - CoordToScreen(0.f, 23.f).y);
                window.draw(menus_ui_click[i]);
            }
            else
                window.draw(menus_ui[i]);
        }
        if (settingMenu)
        {
            window.draw(UI.sprite[1]);
            window.draw(stringMenu[0]);
            window.draw(stringMenu[1]);

            int ind = save.settings.volume * 2 / 10.f - 1;
            if (ind < 0)
                ++ind;
            valueSetting[ind].
                setPosition(CoordToScreen(3000.f, 760.f));
            window.draw(valueSetting[ind]);

            ind = (9 - (int)ceil(save.settings.speedText / 10.f));
            if (ind < 0)
                ++ind;
            valueSetting[ind].
                setPosition(CoordToScreen(3000.f, 935.f));
            window.draw(valueSetting[ind]);
            for (size_t i = 0; i < 4; i++)
            {
                window.draw(LeftRight[i]);
            }
        }
        if (infoBag)
        {
            window.draw(UI.sprite[2]);
        }
        window.display();
    }
    while (window.isOpen() && menu == false)
    {
        if (sound.getStatus() == sf::Music::Stopped &&
            music.getStatus() == sf::Music::Paused)
            music.play();
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed ||
                event.type == sf::Event::MouseButtonPressed)
            {
                if (event.key.code == sf::Keyboard::Space ||
                    event.key.code == sf::Keyboard::Enter ||
                    event.key.code == sf::Mouse::Left)
                {
                    if (isPressent == false)
                        ScrolingText(drawText, txt, text);
                    isPressent = true;
                }
            }
            if (event.type == sf::Event::KeyReleased ||
                event.type == sf::Event::MouseButtonReleased)
            {
                if (event.key.code == sf::Keyboard::Space ||
                    event.key.code == sf::Keyboard::Enter ||
                    event.key.code == sf::Mouse::Left)
                {
                    isPressent = false;
                }
            }
        }
        window.clear();
        window.draw(background.sprite[indexBackgraund(save.background)]);
        if (indexBackgraund(save.background) == 1 && save.isSprite == true)
        {
            window.draw(creature.sprite[1]);
            if (text.getString().getSize() == 1 &&
                der)
            {
                sound.play();
                der = false;
            }
        }
        if (save.background == 4 && save.isSprite == true)
            window.draw(creature.sprite[3]);
        if (save.background == 3 && save.isSprite == true)
        {
            window.draw(creature.sprite[0]);
            if (drawText.find(L"Не в змозі переконати Бента") < drawText.basic_string::npos)
                save.isSprite = false;
        }
        if (save.background == 4 && save.isSprite == true)
        {
            if (drawText.find(L"Закінчив тут?") != drawText.basic_string::npos)
                window.draw(creature.sprite[0]);
        }
        if (save.background == 7 && save.isSprite == true)
        {
            window.draw(creature.sprite[0]);
            if (drawText.find(L"Бент кивнув головою") != drawText.basic_string::npos)
                save.isSprite = false;
        }
        if (save.background == 10 && save.isSprite == true)
        {
            window.draw(creature.sprite[2]);
        }
        window.draw(UI.sprite[0]);
        window.draw(text);
        if (namePers >= 0)
            window.draw(namesPerson[namePers]);
        if (drawText.size() == text.getString().getSize())
            window.draw(endString);
        if(save.background == 12)
            window.draw(background.sprite[indexBackgraund(save.background)]);
        window.display();
        if (time.getTime() > save.settings.speedText)
        {
            time.reset();
            ++save.text;
            text.setString(drawText.substr(0, save.text));
        }
    }
    return 0;
}