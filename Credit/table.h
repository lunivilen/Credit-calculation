#pragma once
#include <math.h>

double is_year_leap(int x);
double days(int a, int b);
double c_days(int u, int y, int h);
double perio_d(int f);

namespace Credit {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class table : public System::Windows::Forms::Form
	{
	public:
		String^ size_;
		String^ per_;
		String^ term_;
		int^ day_;
		int^ month_;
		int^ year_;
		int^ time_;
		int^ order_;
		int^ period_;
		char^ d = ' ';

	public:
		table(String^ size, String^ per, String^ trem, int^ day, int^ month, int^ year, int^ time, int^ order, int^ period)
		{
			InitializeComponent();

			size_ = size;
			per_ = per;
			term_ = trem;
			day_ = day;
			month_ = month;
			year_ = year;
			time_ = time;
			order_ = order;
			period_ = period;
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~table()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pay;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ percent;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ body;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ balance;

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
			this->tab = (gcnew System::Windows::Forms::DataGridView());
			this->date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pay = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->percent = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->body = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->balance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab))->BeginInit();
			this->SuspendLayout();
			// 
			// tab
			// 
			this->tab->AllowUserToAddRows = false;
			this->tab->AllowUserToDeleteRows = false;
			this->tab->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tab->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->date, this->pay,
					this->percent, this->body, this->balance
			});
			this->tab->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tab->Location = System::Drawing::Point(0, 0);
			this->tab->Name = L"tab";
			this->tab->ReadOnly = true;
			this->tab->Size = System::Drawing::Size(546, 261);
			this->tab->TabIndex = 0;
			this->tab->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &table::tab_CellContentClick);
			// 
			// date
			// 
			this->date->HeaderText = L"Дата";
			this->date->Name = L"date";
			this->date->ReadOnly = true;
			// 
			// pay
			// 
			this->pay->HeaderText = L"Платёж";
			this->pay->Name = L"pay";
			this->pay->ReadOnly = true;
			// 
			// percent
			// 
			this->percent->HeaderText = L"Процент";
			this->percent->Name = L"percent";
			this->percent->ReadOnly = true;
			// 
			// body
			// 
			this->body->HeaderText = L"Тело кредита";
			this->body->Name = L"body";
			this->body->ReadOnly = true;
			// 
			// balance
			// 
			this->balance->HeaderText = L"Остаток";
			this->balance->Name = L"balance";
			this->balance->ReadOnly = true;
			// 
			// table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(546, 261);
			this->Controls->Add(this->tab);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"table";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"table";
			this->Load += gcnew System::EventHandler(this, &table::table_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void table_Load(System::Object^ sender, System::EventArgs^ e)
	{
		int n;
		int time = System::Convert::ToInt32(time_);
		int period = System::Convert::ToInt32(period_);
		int term = System::Convert::ToInt32(term_);
		int order = System::Convert::ToInt32(order_);
		double size = System::Convert::ToInt32(size_);
		double per = System::Convert::ToDouble(per_) / 100;
		int day = System::Convert::ToInt32(day_)+1;
		int month = System::Convert::ToInt32(month_)+1;
		int year = System::Convert::ToInt32(year_);
		switch (time)
		{
		case 0:
			switch (period)
			{
			case 0:
				n = term * 12;
				break;
			case 1:
				n = term * 4;
				break;
			case 2:
				n = term;
				break;
			}
			break;
		case 1:
			switch (period)
			{
			case 0:
				n = term;
				break;
			case 1:
				if (term % 3 == 0) n = term / 3;
				else n = (term / 3) + 1;
				break;
			case 2:
				if (term % 12 == 0) n = term / 12;
				else n = (term / 12) + 1;
				break;
			}
			break;
		case 2:
			switch (period)
			{
			case 0:
				if (term % 30 == 0) n = term / 30;
				else n = (term / 30) + 1;
				break;
			case 1:
				if (term % 90 == 0) n = term / 90;
				else n = (term / 90) + 1;
				break;
			case 2:
				if (term % 365 == 0) n = term / 365;
				else n = (term / 365) + 1;
				break;
			}
			break;
		}

		tab->Rows->Add();
		tab->Rows[0]->Cells[0]->Value = 0;
		tab->Rows[0]->Cells[1]->Value = 0;
		tab->Rows[0]->Cells[2]->Value = 0;
		tab->Rows[0]->Cells[3]->Value = 0;
		tab->Rows[0]->Cells[4]->Value = size;

		if (order)
		{
			int g = 0;
			double p = per / perio_d(period);
			double pay = size*((p * pow((1 + p), n)) / (pow((1 + p), n) - 1));
			double percent, body, all_body = size, all_pay = 0, all_percent = 0;

			while (round(size) > 0)
			{
				if (period == 0)
				{
					if (month < 12)
					{
						month++;
					}
					else
					{
						month = 1;
						year++;
					}
				}
				else if (period == 1)
				{
					if (month < 10)
					{
						month += 3;
					}
					else
					{
						month -= 9;
						year++;
					}
				}
				else if (period == 2)
				{
					year++;
				}

				percent = size * p;
				body = pay - percent;
				size -= round(body);

				all_percent += percent;
				all_pay += pay;

				tab->Rows->Add();
				if (10 > day)
				{
					if (10 > month) tab->Rows[g]->Cells[0]->Value = ("0" + day + "." + "0" + month + "." + year);
					else tab->Rows[g]->Cells[0]->Value = "0" + day + "." + month + "." + year;
				}
				else
				{
					if (10 > month) tab->Rows[g]->Cells[0]->Value = day + "." + "0" + month + "." + year;
					else tab->Rows[g]->Cells[0]->Value = day + "." + month + "." + year;
				}

				tab->Rows[g]->Cells[1]->Value = floor(pay * 100) / 100;
				tab->Rows[g]->Cells[2]->Value = percent;
				tab->Rows[g]->Cells[3]->Value = floor(body * 100) / 100;
				if(floor(size * 100) / 100 < 0) tab->Rows[g]->Cells[4]->Value = 0;
				else tab->Rows[g]->Cells[4]->Value = floor(size * 100) / 100;
				
				g++;
			}
			g++;
			tab->Rows->Add();
			tab->Rows[g]->Cells[0]->Value = ("Total payments");
			tab->Rows[g]->Cells[1]->Value = floor(all_pay * 100) / 100;
			tab->Rows[g]->Cells[2]->Value = floor(all_percent * 100) / 100;
			tab->Rows[g]->Cells[3]->Value = floor(all_body * 100) / 100;
			tab->Rows[g]->Cells[4]->Value = 0;

		}
		else
		{
			int g = 0;
			double percent, pay, all_percent = 0, all_pay = 0, all_body = size, body = size / n;
			while (round(size) > 0)
			{
				percent = floor(size * per * c_days(period, month, year) / is_year_leap(year) * 100) / 100;

				if (period == 0)
				{
					if (month < 12)
					{
						month++;
					}
					else
					{
						month = 1;
						year++;
					}
				}
				else if (period == 1)
				{
					if (month < 10)
					{
						month += 3;
					}
					else
					{
						month -= 9;
						year++;
					}
				}
				else if (period == 2)
				{
					year++;
				}

				pay = body + percent;
				size -= body;

				all_percent += percent;
				all_pay += pay;

				if (size < 0) size = 0;
				
				tab->Rows->Add();
				if (10 > day)
				{
					if (10 > month) tab->Rows[g]->Cells[0]->Value = ("0" + day + "." + "0" + month + "." + year);
					else tab->Rows[g]->Cells[0]->Value = "0" + day + "." + month + "." + year;
				}
				else
				{
					if (10 > month) tab->Rows[g]->Cells[0]->Value = day + "." + "0" + month + "." + year;
					else tab->Rows[g]->Cells[0]->Value = day + "." + month + "." + year;
				}

				tab->Rows[g]->Cells[1]->Value = floor(pay * 100) / 100;
				tab->Rows[g]->Cells[2]->Value = percent;
				tab->Rows[g]->Cells[3]->Value = floor(body * 100) / 100;
				tab->Rows[g]->Cells[4]->Value = floor(size * 100) / 100;
				g++;
			}
			g++;
			tab->Rows->Add();
			tab->Rows[g]->Cells[0]->Value = ("Total payments");
			tab->Rows[g]->Cells[1]->Value = floor(all_pay * 100) / 100;
			tab->Rows[g]->Cells[2]->Value = all_percent;
			tab->Rows[g]->Cells[3]->Value = floor(all_body * 100) / 100;
			tab->Rows[g]->Cells[4]->Value = 0;
		}

		
	}
private: System::Void tab_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
