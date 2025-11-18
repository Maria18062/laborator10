#pragma once

namespace Project27 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(42, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть рядок символів:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(409, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L" Кількість приголосних літер:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 137);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(210, 42);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(412, 137);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(197, 42);
			this->textBox2->TabIndex = 3;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(202, 322);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(293, 244);
			this->listBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(235, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 72);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Обробити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(80, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(551, 18);
			this->label3->TabIndex = 6;
			this->label3->Text = L"17.Створити чергу символів. Визначити кількість приголосних літер.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(734, 578);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		textBox2->Clear();

		// Отримуємо введений рядок
		System::String^ input = textBox1->Text;

		// Черга символів
		System::Collections::Generic::Queue<wchar_t>^ queue =
			gcnew System::Collections::Generic::Queue<wchar_t>();

		int consonantCount = 0;

		// Набір українських приголосних (великі + малі)
		array<wchar_t>^ consonants = {
			L'б', L'в', L'г', L'ґ', L'д', L'ж', L'з', L'к',
			L'л', L'м', L'н', L'п', L'р', L'с', L'т', L'ф',
			L'х', L'ц', L'ч', L'ш', L'щ',
			L'Б', L'В', L'Г', L'Ґ', L'Д', L'Ж', L'З', L'К',
			L'Л', L'М', L'Н', L'П', L'Р', L'С', L'Т', L'Ф',
			L'Х', L'Ц', L'Ч', L'Ш', L'Щ'
		};

		// Перебір усіх символів
		for each (wchar_t ch in input)
		{
			queue->Enqueue(ch); // додаємо у чергу

			// Перевірка на приголосну
			for each (wchar_t c in consonants)
			{
				if (ch == c)
				{
					consonantCount++;
					break;
				}
			}
		}

		// Виведення черги в ListBox
		for each (wchar_t ch in queue)
			listBox1->Items->Add(System::Convert::ToString(ch));

		// Виведення кількості приголосних
		textBox2->Text = consonantCount.ToString();
	}
};
}
