#pragma once
#include "table.h"

namespace Credit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::TextBox^ size;
	protected:

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ per;
	private: System::Windows::Forms::TextBox^ term;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ time;


	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;




	private: System::Windows::Forms::ComboBox^ period;

	private: System::Windows::Forms::ComboBox^ order;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::ComboBox^ year;
	private: System::Windows::Forms::ComboBox^ month;
	private: System::Windows::Forms::ComboBox^ day;











	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->size = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->per = (gcnew System::Windows::Forms::TextBox());
			this->term = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->time = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->period = (gcnew System::Windows::Forms::ComboBox());
			this->order = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->year = (gcnew System::Windows::Forms::ComboBox());
			this->month = (gcnew System::Windows::Forms::ComboBox());
			this->day = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// size
			// 
			this->size->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->size->Location = System::Drawing::Point(12, 50);
			this->size->Name = L"size";
			this->size->Size = System::Drawing::Size(236, 26);
			this->size->TabIndex = 0;
			this->size->Text = L"300000";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Сумма кредита/займа";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(236, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Процентная ставка, % годовых";
			// 
			// per
			// 
			this->per->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->per->Location = System::Drawing::Point(12, 130);
			this->per->Name = L"per";
			this->per->Size = System::Drawing::Size(236, 26);
			this->per->TabIndex = 4;
			this->per->Text = L"10";
			// 
			// term
			// 
			this->term->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->term->Location = System::Drawing::Point(12, 210);
			this->term->Name = L"term";
			this->term->Size = System::Drawing::Size(132, 26);
			this->term->TabIndex = 5;
			this->term->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 18);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Срок кредита/займа";
			// 
			// time
			// 
			this->time->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->time->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->time->FormattingEnabled = true;
			this->time->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"год", L"месяц", L"день" });
			this->time->Location = System::Drawing::Point(150, 210);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(98, 26);
			this->time->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(290, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(201, 18);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Периодичность погашения";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(290, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Порядок погашения";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(290, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 18);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Дата выдачи";
			// 
			// period
			// 
			this->period->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->period->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->period->FormattingEnabled = true;
			this->period->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ежемесячно", L"Ежеквартально", L"Ежегодно" });
			this->period->Location = System::Drawing::Point(290, 210);
			this->period->Name = L"period";
			this->period->Size = System::Drawing::Size(236, 26);
			this->period->TabIndex = 15;
			// 
			// order
			// 
			this->order->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->order->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->order->FormattingEnabled = true;
			this->order->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Дифференцированный", L"Аннуитетный" });
			this->order->Location = System::Drawing::Point(290, 130);
			this->order->Name = L"order";
			this->order->Size = System::Drawing::Size(236, 26);
			this->order->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(210, 250);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 36);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// year
			// 
			this->year->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->year->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->year->FormattingEnabled = true;
			this->year->Items->AddRange(gcnew cli::array< System::Object^  >(52) {
				L"2021", L"2020", L"2019", L"2018", L"2017", L"2016",
					L"2015", L"2014", L"2013", L"2012", L"2011", L"2010", L"2009", L"2008", L"2007", L"2006", L"2005", L"2004", L"2003", L"2002",
					L"2001", L"2000", L"1999", L"1998", L"1997", L"1996", L"1995", L"1994", L"1993", L"1992", L"1991", L"1990", L"1989", L"1988",
					L"1987", L"1986", L"1985", L"1984", L"1983", L"1982", L"1981", L"1980", L"1979", L"1978", L"1977", L"1976", L"1975", L"1974",
					L"1973", L"1972", L"1971", L"1970"
			});
			this->year->Location = System::Drawing::Point(459, 50);
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(67, 26);
			this->year->TabIndex = 20;
			// 
			// month
			// 
			this->month->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->month->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->month->FormattingEnabled = true;
			this->month->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"январь", L"февраль", L"март", L"апрель", L"май",
					L"июнь", L"июль", L"август", L"сентябрь", L"октябрь", L"ноябрь", L"декабрь"
			});
			this->month->Location = System::Drawing::Point(344, 50);
			this->month->Name = L"month";
			this->month->Size = System::Drawing::Size(109, 26);
			this->month->TabIndex = 21;
			// 
			// day
			// 
			this->day->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->day->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->day->FormattingEnabled = true;
			this->day->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27",
					L"28", L"29", L"30", L"31"
			});
			this->day->Location = System::Drawing::Point(290, 50);
			this->day->Name = L"day";
			this->day->Size = System::Drawing::Size(48, 26);
			this->day->TabIndex = 22;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 296);
			this->Controls->Add(this->day);
			this->Controls->Add(this->month);
			this->Controls->Add(this->year);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->size);
			this->Controls->Add(this->per);
			this->Controls->Add(this->term);
			this->Controls->Add(this->time);
			this->Controls->Add(this->period);
			this->Controls->Add(this->order);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Расчёт кредита";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		time->SelectedIndex = 0;
		day->SelectedIndex = 0;
		month->SelectedIndex = 0;
		year->SelectedIndex = 0;
		order->SelectedIndex = 0;
		period->SelectedIndex = 0;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		table^ fr = gcnew table(size->Text, per->Text, term->Text, day->SelectedIndex,month->SelectedIndex, System::Convert::ToInt32(year->Items[year->SelectedIndex]), time->SelectedIndex, order->SelectedIndex, period->SelectedIndex);
		fr->Show();
	}
};
}
