#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

const int NumberOfAllTaskLevelFirst = 6;
const int NumberOfAllTaskLevelSecond = 2;
const int NumberOfAllTaskLevelThird = 2;

const int NumberUsedTaskLevelFirst = 3;
const int NumberUsedTaskLevelSecond = 1;
const int NumberUsedTaskLevelThird = 1;

struct TaskLevelFirst
{
	string id = "";
	string task = "";
	string answer = "";
	string explanation = "";
};

struct TaskLevelSecond
{
	string id = "";
	string task = "";
	string answer = "";
	string explanation = "";
};

struct TaskLevelThird
{
	string id = "";
	string task = "";
	string answer = "";
	string explanation = "";
};

void WaitPressedSpace()
{
	char stop = '0';
	cout << "\nДля продолжения нажмите пробел\n";
	stop = _getch();
	while (stop != ' ')
	{
		cout << "\nНажата неверная клавиша!\n";
		cout << "Для продолжения нажмите пробел\n";
		stop = _getch();
	}
}

void ShowTutorial()
{
	cout << "Вы запустили программу-тренажёр по четвёртому заданию из ЕГЭ по информатике\n";
	cout << "Тест состоит из пяти заданий с разной сложностью: 3 базового уровня, 1 повышенного уровня и 1 высокого уровня\n";
	WaitPressedSpace();
}

TaskLevelFirst GetTaskLevelFirst(bool ArrayOfRandomChoosedTaskLevelFirst[])
{
	TaskLevelFirst ArrayLevelFirst[NumberOfAllTaskLevelFirst];
	
	ArrayLevelFirst[0].id = "(01)\n";
	ArrayLevelFirst[0].task = "\nПо каналу связи передаются сообщения, содержащие только четыре буквы П, О, С, Т. Для передачи используется двоичный код, допускающий однозначное декодирование.\nДля букв Т, О, П используются такие кодовые слов Т: 111, О: 0, П: 100. Укажите кратчайший код для буквы С, при котором код будет допускать однозначное декодирование.\nЕсли таких кодов несколько, укажите код с наименьшим числовым значением.\n";
	ArrayLevelFirst[0].answer = "101";
	ArrayLevelFirst[0].explanation = "\nРешение:\nБуква С не может кодироваться кодом начинающимся с 0, поскольку буква О имеет код 0\nБуква С не может кодироваться как 1, так как код буквы Т начинается с 1\nБуква С не может кодироваться как 10, так как код буквы П начинается с 10\nБуква С не может кодироваться как 11, так как код буквы Т начинается с 11.\nБуква С не может кодироваться как 100, так как код буквы П - 100\nБуква С может кодироваться как 101 и этот код имеет наименьшее возможное значение.\n";

	ArrayLevelFirst[1].id = "(02)\n";
	ArrayLevelFirst[1].task = "\nПо каналу связи передаются сообщения, содержащие только пять букв A, B, C, D, E. Для передачи используется двоичный код, допускающий однозначное декодирование.\nДля букв A, B, C используются такие кодовые слова: A: 111, B: 0, C: 100. Укажите кратчайший код для буквы D, при котором код будет допускать однозначное декодирование.\nЕсли таких кодов несколько, укажите код с наименьшим числовым значением.\n";
	ArrayLevelFirst[1].answer = "101";
	ArrayLevelFirst[1].explanation = "\nРешешние:\nБуква D не может иметь код, который начинается с 0, поскольку буква В имеет код 0.\nБуква D не  может кодироваться, как 1, поскольку код буквы А ничанается с 1.\nБуква D не может кодироваться как 10, так как код буквы С начинается с 10.\nБуква D не может кодироваться как 11, так как код буквы А начинается с 11.\nБуква D не может кодироваться как 100, так как код буквы С - 100.\nБуква D может кодироваться как 101 и это наименьшее возможное значение.\n";
 
	ArrayLevelFirst[2].id = "(03)\n";
	ArrayLevelFirst[2].task = "\nДля кодирования некоторой последовательности, состоящей из букв А, Б, В, Г и Д, используется неравномерный двоичный код.\nОн позволяет однозначно декодировать полученную двоичную последовательность. Вот этот код: А - 1, Б - 0100, В - 000, Г - 011, Д - 0101.\nТребуется сократить для одной из букв длину кодового слова так, чтобы код по-прежднему можно было декодировать однозначно. Коды остальных букв меняться не должны.\nКаким из указанных способов это можно сделать?\n1)Для буквы Г - 11\n2)Для буквы В - 00\n3)Для буквы Г - 01\n4)Это невозможно\n";
	ArrayLevelFirst[2].answer = "2";
	ArrayLevelFirst[2].explanation = "\nРешение:\nДля однозначного декодирования получившееся в результате сокращения кодовое слово не должно быть началом никакого другого.\nПервый вариант ответа не подоходит, поскольку код буквы А является началом кода буквы Г.\nТретий вариант ответа не подходит, так как в таком случае код буквы Г является началом кода буквы Д.\nВторой вариант ответа подходит.\n";

	ArrayLevelFirst[3].id = "(04)\n";
	ArrayLevelFirst[3].task = "\nПо каналу связи передаются сообщения, содержащие только четыре буквы: Р, Е, К, А. Для передачи используется двоичный код, удовлетворяющий условию Фано.\nДля букв А, Р, Е используются такие кодовые слова: А: 101, Р: 0, E: 100. Укажите кратчайшее кодовое слово для буквы К.\nЕсли таких кодов несколько, укажите код с наименьшим числовым значением.\n";
	ArrayLevelFirst[3].answer = "101";
	ArrayLevelFirst[3].explanation = "\nРешение:\n0 нельзя, это буква Р.\n1 нельзя из-за букв Е и К.\n01 нельзя, из-за Р.\n10 нельзя из-за Е.\n11 нельзя из-за А.\n000 нельзя из-за Р.\n001 нельзя из-за Р.\n100 нельзя, это Е.\n101 можно использовать\n";

	ArrayLevelFirst[4].id = "(05)\n";
	ArrayLevelFirst[4].task = "\nДля передачи данных используется двоичный код. Сообщение содержит только буквы: А, Б, В или Г, для букв А, Б, и В используются кодовые слова: А - 0, Б - 101, В - 111.\nНайдите кодовое слово минимальной длинны для Г при котором сохраняется прямое условие Фано. Если таких кодовых слов несколько, укажите кодовое слово с минимальным двоичным значением.\n";
	ArrayLevelFirst[4].answer = "100";
	ArrayLevelFirst[4].explanation = "\nРешение:\nПеречислим возможные коды в порядке возрастания длины и числового значения:\n0 - нельзя буква А, начинается с 0.\n1 - нельзя из-за буквы Б, В начинается с 1.\n01 - нельзя из-за А.\n10 - нельзя из-за Б.\n11 - нельзя из-за В.\n000 - нельзя из-за А.\n001 - нельзя из-за А.\n011 - нельзя из-за А.\n100 - можно использовать.\n";

	ArrayLevelFirst[5].id = "(06)\n";
	ArrayLevelFirst[5].task = "\nПо каналу связи передаётся сообщения содержащие только четыре буквы: А, Б, В, Г. Для передачи используется двоичный код, удовлетворяющий условию Фано.\nДля букв А, Б, В используются такие коды: А: 0, Б: 110, В: 101. Укажите кратчайшее кодовое слово для буквы Г, при котором код будет допускать однозначное декодирование.\nЕсли таких кодов несколько, укажите код с наибольшим числовым значением.\n";
	ArrayLevelFirst[5].answer = "111";
	ArrayLevelFirst[5].explanation = "\nРешение:\nПеречислим возможные коды в порядке возрастания длины и числового значения:\n0 - нельзя из-за А.\n1 - нельзя буквы Б,В начинаются с 1.\n01 - нельзя из-за А.\n10 - нельзя из-за В.\n11 - нельзя из-за Б.\n000 - нельзя из-за А.\n001 - нельзя из-за А.\n010 - нельзя из-за А.\n011 - нельзя из-за А.\n100 - можно использовать.\n101 - нельзя из-за В.\n110 - нельзя из-за Б.\n111 - можно использовать.\nТаким образом кратчайшее кодовое слово с наибольшим числовым значением - 111.\n";

	int NewRandomTaskLevelFirst = rand() % NumberOfAllTaskLevelFirst;
	while (ArrayOfRandomChoosedTaskLevelFirst[NewRandomTaskLevelFirst] != false)
	{
		NewRandomTaskLevelFirst = rand() % NumberOfAllTaskLevelFirst;
	}
	ArrayOfRandomChoosedTaskLevelFirst[NewRandomTaskLevelFirst] = true;
	return ArrayLevelFirst[NewRandomTaskLevelFirst];
}	

TaskLevelSecond GetTaskLevelSecond(bool ArrayOfRandomChoosedTaskLevelSecond[])
{
	TaskLevelSecond ArrayLevelSecond[NumberOfAllTaskLevelSecond];

	ArrayLevelSecond[0].id = "(01)\n";
	ArrayLevelSecond[0].task = "\nПо каналу связи передаются сообщения, содержащие только буквы А, Б, В, Г, Д, Е. Для передачи используется неравномерный двоичный код, удовлетворяющий условию Фано.\nДля букв А, Б, В используются такие кодовые слова: А - 0, Б - 101, В - 110. Какова наименьшая возможная суммарная длина всех кодовых слов?\n";
	ArrayLevelSecond[0].answer = "18";
	ArrayLevelSecond[0].explanation = "\nРешение:\nЛюбой код начинающийся с 0 не подходит, так как код А - 0, поэтому смотрим те, что начинаются с 1.\n1 и 10 нельзя из-за Б, 11 нельзя из-за В\n111 можно использовать, пусть это будет код Д.\n100 также можно использовать, но если его взять, то кодов не хватит на все оставшиеся буквы, поэтому его не берём.\nМы уже рассмотрели все трёхзначные коды, поэтому берём любые четырёхзначные, например 1000 и 1001.\nВ сумме длина кодов 1 + 3 + 3 + 3 + 4 + 4 = 18\n";

	ArrayLevelSecond[1].id = "(02)\n";
	ArrayLevelSecond[1].task = "\nДля кодирования некоторой последовательности, состоящей из букв А, Б, В, Г, Д, Е, решили использовать неравномерный двоичный код, удовлетворяющий условию Фано.\nДля букв А, Б используются такие кодовые слова: А - 0, Б - 10. Какова наименьшая возможная сумма длин кодовых слов для букв В, Г, Д, Е?";
	ArrayLevelSecond[1].answer = "16";
	ArrayLevelSecond[1].explanation = "\nРешение:\nДля двух букв кодовые слова уже известные, осталось подобрать для оставшихся двух букв кодовые слова, которые будут ялвяться кратчайшими и удовлетворять условию Фано.\nКодовые слова не могут начинаться с 0, поскольку 0 является кодовым словом для буквы А. Кодовым словом буквы В будет являтся 1100, кодовые слова 11, 110 и 111 использовать нельзя, поскольку не получится закодировать остальные буквы таким образом, чтобы возможная сумма длин кодовых слов для букв В, Г, Д и Е была наименьшей. Кодовым словом для буквы Г будет являться 1101, для буквы Д - 1110, а для буквы Е - 1111. Таким образом сумма кратчайших кодовых слов для букв В, Г, Д и Е будет равяться 4 + 4 + 4 + 4 = 16\n";

	int NewRandomTaskLevelSecond = rand() % NumberOfAllTaskLevelSecond;
	while (ArrayOfRandomChoosedTaskLevelSecond[NewRandomTaskLevelSecond] != false)
	{
		NewRandomTaskLevelSecond = rand() % NumberOfAllTaskLevelSecond;
	}
	ArrayOfRandomChoosedTaskLevelSecond[NewRandomTaskLevelSecond] = true;
	return ArrayLevelSecond[NewRandomTaskLevelSecond];
}

TaskLevelThird GetTaskLevelThird(bool ArrayOfRandomChoosedTaskLevelThird[])
{
	TaskLevelThird ArrayLevelThird[NumberOfAllTaskLevelThird];

	ArrayLevelThird[0].id = "(01)\n";
	ArrayLevelThird[0].task = "\nВсе заглавные буквы русского алфавита закодированы неравномерным двоичным кодом, в котором никакое кодовое слово не является началом другого кодового слова.\nЭто условие обеспечивает возмонжость однозначной расшифровки заокдированных сообщений. Известно, что слову МРАМОР соответствует код 1101010011001101.\nКакой код соответствует слову РОМ?\n";
	ArrayLevelThird[0].answer = "10101110";
	ArrayLevelThird[0].explanation = "\nРешение:\nЗаметим, что буква Р в слове МРАМОР потворяется два раза и одна из них стоит на конце слова.\nКодовые слова 1 и 01 для буквы Р не подходят, поскольку не получится выбрать для других букв код так, чтобы они удовлетворяли условию неравномерного двоичного кода.\nТогда букву Р кодируется как 101. Буква М повторяется в слове МРАМОР два раза и одна из них стоит в начале слова.\nПоскольку буква Р кодируется словом 101, тогда буква М может быть закодирована только кодовым словом 110. Тогда букву А может быть закодирована только кодовым словом 00, а буква О может быть закадирована только кодовым словом 01. Таким образом, слову РОМ соответствует кодовое слово 10101110.\n";

	ArrayLevelThird[1].id = "(02)\n"; 
	ArrayLevelThird[1].task = "\nВсе заглавные буквы русского алфавита закодированы неравномерным двоичным кодом, в котором никакое кодовое слово не является началом другого кодового слова.\nЭто условие обеспечивает возможность однозначной расшифровки закодированных сообщений. Известно, что слову ГЛАГОЛ соответствует код 0010101100110010.\nКакой код соответствует слову ЛОГ?\n";
	ArrayLevelThird[1].answer = "01010001";
	ArrayLevelThird[1].explanation = "\nРешение:\nЗаметич, что буква Л в слове ГЛАГОЛ повторяется два раза и одна из них стоит на конце слова. Кодовые слова 0 и 10 для буквы Л не подходят, так как не получится выбрать для других букв кодовые слова так, чтобы они удовлетворяли условию неравномерного двоичного кода. Тогда буква Л кодируется, как 010.\nБуква Г повторяется в слове ГЛАГОЛ два раза и одна из них стоит в начале слова. Поскольку Л - 010, тогда буква Г может быть закодирована только кодовым словом 001.\nТогда буква А может быть закодирована только кодовым словом 11, а буква О может быть закодирована только кодовым словом 10.\nТаким образом, слову ЛОГ соответствует кодовое слово 01010001.\n";

	int NewRandomTaskLevelThird = rand() % NumberOfAllTaskLevelThird;
	while (ArrayOfRandomChoosedTaskLevelThird[NewRandomTaskLevelThird] != false)
	{
		NewRandomTaskLevelThird = rand() % NumberOfAllTaskLevelThird;
	}
	ArrayOfRandomChoosedTaskLevelThird[NewRandomTaskLevelThird] = true;
	return ArrayLevelThird[NewRandomTaskLevelThird];
}

string GetCorrectPeopleAnswer()
{
	string PeopleAnswer = "";
	while (PeopleAnswer == "")
	{
		PeopleAnswer = "";
		cout << "\nВведите ответ: ";
		cin >> PeopleAnswer;
	}
	return PeopleAnswer;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand((unsigned int)time(NULL));
	short int Mark = 0;
	string PeopleAnswer = "";
	
	bool ArrayOfRandomChoosedTaskLevelFirst[NumberUsedTaskLevelFirst];
	for (int Counter = 0; Counter < NumberUsedTaskLevelFirst; Counter++)
	{
		ArrayOfRandomChoosedTaskLevelFirst[Counter] = false;
	}
	
	bool ArrayOfRandomChoosedTaskLevelSecond[NumberUsedTaskLevelSecond];
	for (int Counter = 0; Counter < NumberUsedTaskLevelSecond; Counter++)
	{
		ArrayOfRandomChoosedTaskLevelSecond[Counter] = false;
	}

	bool ArrayOfRandomChoosedTaskLevelThird[NumberUsedTaskLevelThird];
	for (int Counter = 0; Counter < NumberUsedTaskLevelThird; Counter++)
	{
		ArrayOfRandomChoosedTaskLevelThird[Counter] = false;
	}

	ShowTutorial();

	TaskLevelFirst CurrentTaskLevelFirst;
	for (int Counter = 0; Counter < NumberUsedTaskLevelFirst; Counter++)
	{
		PeopleAnswer = "";
		system("cls");
		CurrentTaskLevelFirst = GetTaskLevelFirst(ArrayOfRandomChoosedTaskLevelFirst);
		cout << "Задание базового уровня, номер " << Counter+1 << CurrentTaskLevelFirst.id;
		cout << CurrentTaskLevelFirst.task;
		PeopleAnswer = GetCorrectPeopleAnswer();
		if (PeopleAnswer == CurrentTaskLevelFirst.answer)
		{
			cout << "\nВерный ответ\n";
			Mark++;
			WaitPressedSpace();
		}
		else
		{
			cout << "\nОтвет неверный!\n";
			cout << CurrentTaskLevelFirst.explanation;
			WaitPressedSpace();
		}
	}
	
	TaskLevelSecond CurrentTaskLevelSecond;
	for (int Counter = 0; Counter < NumberUsedTaskLevelSecond; Counter++)
	{
		PeopleAnswer = "";
		system("cls");
		CurrentTaskLevelSecond = GetTaskLevelSecond(ArrayOfRandomChoosedTaskLevelSecond);
		cout << "Задание повышенного уровня, номер " << Counter + 1 << CurrentTaskLevelSecond.id;
		cout << CurrentTaskLevelSecond.task;
		PeopleAnswer = GetCorrectPeopleAnswer();
		if (PeopleAnswer == CurrentTaskLevelSecond.answer)
		{
			cout << "\nВерный ответ\n";
			Mark++;
			WaitPressedSpace();
		}
		else
		{
			cout << "\nОтвет неверный!\n";
			cout << CurrentTaskLevelSecond.explanation;
			WaitPressedSpace();
		}
	}

	TaskLevelThird CurrentTaskLevelThird;
	for (int Counter = 0; Counter < NumberUsedTaskLevelThird; Counter++)
	{
		PeopleAnswer = "";
		system("cls");
		CurrentTaskLevelThird = GetTaskLevelThird(ArrayOfRandomChoosedTaskLevelThird);
		cout << "Задание высокого уровня, номер " << Counter + 1 << CurrentTaskLevelThird.id;
		cout << CurrentTaskLevelThird.task;
		PeopleAnswer = GetCorrectPeopleAnswer();
		if (PeopleAnswer == CurrentTaskLevelThird.answer)
		{
			cout << "\nВерный ответ\n";
			Mark++;
			WaitPressedSpace();
		}
		else
		{
			cout << "\nОтвет неверный!\n";
			cout << CurrentTaskLevelThird.explanation;
			WaitPressedSpace();
		}
	}

	system("cls");
	switch (Mark)
	{
	case 3:
		cout << "Твоя оценка 3. Вы решили верно только 3 задания.\n";
		break;
	case 4:
		cout << "Твоя оценка 4. Вы решили верно 4 задания.\n";
		break;
	case 5:
		cout << "Твоя оценка 5! Вы решили всё верно!\n";
		break;
	default:
		cout << "Твоя оценка 2! Вы решили меньше трёх заданий!\n";
		break;
	}

	system("pause");
	return 0;
}