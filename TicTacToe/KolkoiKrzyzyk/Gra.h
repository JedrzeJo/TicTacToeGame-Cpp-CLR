#pragma once

namespace KolkoiKrzyzyk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Gra
	/// </summary>
	public ref class Gra : public System::Windows::Forms::Form
	{
		bool wcisnety = true;
		bool wygral = false;
		int winX = 0;
		int winY = 0;
		String^mistrz = " ";


	public:
		Gra(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Gra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  a1;
	private: System::Windows::Forms::PictureBox^  c1;


	private: System::Windows::Forms::PictureBox^  b1;
	private: System::Windows::Forms::PictureBox^  b2;
	private: System::Windows::Forms::PictureBox^  c2;



	private: System::Windows::Forms::PictureBox^  a2;
	private: System::Windows::Forms::PictureBox^  b3;
	private: System::Windows::Forms::PictureBox^  c3;



	private: System::Windows::Forms::PictureBox^  a3;

	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Gra::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->a1 = (gcnew System::Windows::Forms::PictureBox());
			this->c1 = (gcnew System::Windows::Forms::PictureBox());
			this->b1 = (gcnew System::Windows::Forms::PictureBox());
			this->b2 = (gcnew System::Windows::Forms::PictureBox());
			this->c2 = (gcnew System::Windows::Forms::PictureBox());
			this->a2 = (gcnew System::Windows::Forms::PictureBox());
			this->b3 = (gcnew System::Windows::Forms::PictureBox());
			this->c3 = (gcnew System::Windows::Forms::PictureBox());
			this->a3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Gra::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Wygrane X: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(192, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Wygrane O: ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(178, 377);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Nowa Gra";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Gra::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(217, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"0";
			// 
			// a1
			// 
			this->a1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a1.Image")));
			this->a1->Location = System::Drawing::Point(12, 70);
			this->a1->Name = L"a1";
			this->a1->Size = System::Drawing::Size(48, 60);
			this->a1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->a1->TabIndex = 6;
			this->a1->TabStop = false;
			this->a1->Tag = L"\?";
			this->a1->Click += gcnew System::EventHandler(this, &Gra::play);
			// 
			// c1
			// 
			this->c1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c1.Image")));
			this->c1->Location = System::Drawing::Point(211, 60);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(48, 60);
			this->c1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c1->TabIndex = 7;
			this->c1->TabStop = false;
			this->c1->Tag = L"\?";
			this->c1->Click += gcnew System::EventHandler(this, &Gra::play);
			// 
			// b1
			// 
			this->b1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b1.Image")));
			this->b1->Location = System::Drawing::Point(107, 60);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(48, 60);
			this->b1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->b1->TabIndex = 8;
			this->b1->TabStop = false;
			this->b1->Tag = L"\?";
			this->b1->Click += gcnew System::EventHandler(this, &Gra::play);
			// 
			// b2
			// 
			this->b2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b2.Image")));
			this->b2->Location = System::Drawing::Point(109, 156);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(48, 60);
			this->b2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->b2->TabIndex = 11;
			this->b2->TabStop = false;
			this->b2->Tag = L"\?";
			this->b2->Click += gcnew System::EventHandler(this, &Gra::play);
			// 
			// c2
			// 
			this->c2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c2.Image")));
			this->c2->Location = System::Drawing::Point(218, 155);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(48, 60);
			this->c2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c2->TabIndex = 10;
			this->c2->TabStop = false;
			this->c2->Tag = L"\?";
			this->c2->Click += gcnew System::EventHandler(this, &Gra::play);
			// 
			// a2
			// 
			this->a2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a2.Image")));
			this->a2->Location = System::Drawing::Point(12, 167);
			this->a2->Name = L"a2";
			this->a2->Size = System::Drawing::Size(48, 60);
			this->a2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->a2->TabIndex = 9;
			this->a2->TabStop = false;
			this->a2->Tag = L"\?";
			this->a2->Click += gcnew System::EventHandler(this, &Gra::play);
			// 
			// b3
			// 
			this->b3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b3.Image")));
			this->b3->Location = System::Drawing::Point(114, 256);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(48, 60);
			this->b3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->b3->TabIndex = 14;
			this->b3->TabStop = false;
			this->b3->Tag = L"\?";
			this->b3->Click += gcnew System::EventHandler(this, &Gra::play);
			// 
			// c3
			// 
			this->c3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c3.Image")));
			this->c3->Location = System::Drawing::Point(218, 256);
			this->c3->Name = L"c3";
			this->c3->Size = System::Drawing::Size(48, 60);
			this->c3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c3->TabIndex = 13;
			this->c3->TabStop = false;
			this->c3->Tag = L"\?";
			this->c3->Click += gcnew System::EventHandler(this, &Gra::play);
			// 
			// a3
			// 
			this->a3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a3.Image")));
			this->a3->Location = System::Drawing::Point(14, 265);
			this->a3->Name = L"a3";
			this->a3->Size = System::Drawing::Size(48, 60);
			this->a3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->a3->TabIndex = 12;
			this->a3->TabStop = false;
			this->a3->Tag = L"\?";
			this->a3->Click += gcnew System::EventHandler(this, &Gra::play);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"kolko.png");
			this->imageList1->Images->SetKeyName(1, L"krzyzyk.png");
			this->imageList1->Images->SetKeyName(2, L"pytajnik.png");
			// 
			// Gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(284, 412);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->c3);
			this->Controls->Add(this->a3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->c2);
			this->Controls->Add(this->a2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->c1);
			this->Controls->Add(this->a1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Gra";
			this->Text = L"  Gra Cycepsa";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void play(System::Object^  sender, System::EventArgs^  e)
	{
		PictureBox^zdjecie = (PictureBox^)sender;

		if (wcisnety) { zdjecie->Image = imageList1->Images[1]; zdjecie->Tag = "X"; }
		else { zdjecie->Image = imageList1->Images[0]; zdjecie->Tag = "O";}
		
		wcisnety = !wcisnety;
		zdjecie->Enabled = false;
		wygrana();
	}
	private: void wygrana()
	{
		//POZIOMO
		if ((a1->Tag == b1->Tag) && (b1->Tag == c1->Tag) && (a1->Tag != "?")) { wygral = true; }
		if ((a2->Tag == b2->Tag) && (b2->Tag == c2->Tag) && (a2->Tag != "?")) { wygral = true; }
		if ((a3->Tag == b3->Tag) && (b3->Tag == c3->Tag) && (a3->Tag != "?")) { wygral = true; }
		//PIONOWO
		if ((a1->Tag == a2->Tag) && (a2->Tag == a3->Tag) && (a1->Tag != "?")) { wygral = true; }
		if ((b1->Tag == b2->Tag) && (b2->Tag == b3->Tag) && (b1->Tag != "?")) { wygral = true; }
		if ((c1->Tag == c2->Tag) && (c2->Tag == c3->Tag) && (c1->Tag != "?")) { wygral = true; }
		//SKOS
		if ((a1->Tag == b2->Tag) && (b2->Tag == c3->Tag) && (a1->Tag != "?")) { wygral = true; }
		if ((a3->Tag == b2->Tag) && (b2->Tag == c1->Tag) && (a3->Tag != "?")) { wygral = true; }

		if (!wcisnety && wygral) {
			winX++; 
			mistrz = "X";
			label3->Text = Convert::ToString(winX);

		}
		if (wcisnety && wygral) {
			winY++; 
			mistrz = "O";
			label4->Text = Convert::ToString(winY);
		}

			if (wygral) 
			{ 
				for each (Control^element in this->Controls)
				{
					if (element->GetType() == PictureBox::typeid) element->Enabled = false;
				}

			MessageBox::Show("Bitwa wygrana przez "+mistrz+" ale wojna wci¹¿ trwa!", "Gra Cycepsa",
								MessageBoxButtons::OK,MessageBoxIcon::Information); 
			}



	}
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			wygral = false;
			restart();			
		}
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			wygral = false;
			restart();
			winX = 0;
			winY = 0;
			label3->Text = Convert::ToString(winX);
			label4->Text = "0";
		}
				 private: void restart()
				 {
					 for each (Control^element in this->Controls)
					 {
						 try
						 {
							 PictureBox^zdjecie = (PictureBox^)element;
							 zdjecie->Enabled = true;
							 zdjecie->Tag = "?";
							 zdjecie->Image = imageList1->Images[2];
						 }
						 catch (...)
						 {

						 }
					 }
				 }
};
}
