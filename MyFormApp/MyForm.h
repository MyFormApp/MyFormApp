#pragma once

#include "CameraForm.h"
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;

namespace MyFormApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripContainer^ toolStripContainer;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;


	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ imageToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip;
	private: System::Windows::Forms::ToolStripButton^ openFileButton;
	private: System::Windows::Forms::ToolStripButton^ saveFileButton;
	private: System::Windows::Forms::ToolStripButton^ saveAsFileButton;




	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ drawLineToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deawEllipseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ convertToHSVToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ saveFileMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsFileMenu;
	private: System::Windows::Forms::Panel^ pictureBoxPanel;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::ToolStripStatusLabel^ statusLabel;
	private: System::Windows::Forms::ToolStripStatusLabel^ pixelPointLabel;
	private: System::Windows::Forms::ToolStripStatusLabel^ pixelColorLabel;


	private: System::Windows::Forms::ToolStripStatusLabel^ imageSizeLabel;
	private: System::Windows::Forms::ToolStripMenuItem^ convertToGrayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ drawToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ circleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ freeHandToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ triangleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ squareToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ penToolStripMenuItem;
	private: System::Windows::Forms::ToolStripComboBox^ penSize;
	private: System::Windows::Forms::ColorDialog^ colorDialog;
	private: System::Windows::Forms::ToolStripMenuItem^ pencolor;

	private: System::Windows::Forms::ToolStripButton^ colorButton;
	private: System::Windows::Forms::ToolStripComboBox^ penSizetoolStripComboBox;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripMenuItem^ solidLineToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dashedLineToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ fillColor;
	private: System::Windows::Forms::ToolStripMenuItem^ blurToolStripMenuItem;

	private: System::Windows::Forms::ToolStripTextBox^ enterText;


	private: System::Windows::Forms::ToolStripButton^ putTxt;
	private: System::Windows::Forms::ToolStripMenuItem^ convertToRGBToolStripMenuItem;





















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolStripContainer = (gcnew System::Windows::Forms::ToolStripContainer());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->statusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->pixelPointLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->pixelColorLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->imageSizeLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->pictureBoxPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsFileMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drawLineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deawEllipseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertToHSVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertToGrayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blurToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertToRGBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drawToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->circleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->freeHandToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->triangleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->squareToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->penToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->penSize = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->pencolor = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->openFileButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveFileButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveAsFileButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->solidLineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dashedLineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->penSizetoolStripComboBox = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->colorButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->fillColor = (gcnew System::Windows::Forms::ToolStripButton());
			this->enterText = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->putTxt = (gcnew System::Windows::Forms::ToolStripButton());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->toolStripContainer->BottomToolStripPanel->SuspendLayout();
			this->toolStripContainer->ContentPanel->SuspendLayout();
			this->toolStripContainer->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->pictureBoxPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->menuStrip->SuspendLayout();
			this->toolStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer
			// 
			// 
			// toolStripContainer.BottomToolStripPanel
			// 
			this->toolStripContainer->BottomToolStripPanel->Controls->Add(this->statusStrip1);
			// 
			// toolStripContainer.ContentPanel
			// 
			this->toolStripContainer->ContentPanel->Controls->Add(this->pictureBoxPanel);
			this->toolStripContainer->ContentPanel->Size = System::Drawing::Size(743, 435);
			this->toolStripContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer->Name = L"toolStripContainer";
			this->toolStripContainer->Size = System::Drawing::Size(743, 517);
			this->toolStripContainer->TabIndex = 0;
			this->toolStripContainer->Text = L"toolStripContainer1";
			// 
			// toolStripContainer.TopToolStripPanel
			// 
			this->toolStripContainer->TopToolStripPanel->Controls->Add(this->menuStrip);
			this->toolStripContainer->TopToolStripPanel->Controls->Add(this->toolStrip);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->statusLabel, this->pixelPointLabel,
					this->pixelColorLabel, this->imageSizeLabel
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 0);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(743, 26);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// statusLabel
			// 
			this->statusLabel->Name = L"statusLabel";
			this->statusLabel->Size = System::Drawing::Size(728, 20);
			this->statusLabel->Spring = true;
			this->statusLabel->Text = L"toolStripStatusLabel1";
			// 
			// pixelPointLabel
			// 
			this->pixelPointLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pixelPointLabel.Image")));
			this->pixelPointLabel->Name = L"pixelPointLabel";
			this->pixelPointLabel->Size = System::Drawing::Size(53, 20);
			this->pixelPointLabel->Text = L"X, Y";
			this->pixelPointLabel->Visible = false;
			// 
			// pixelColorLabel
			// 
			this->pixelColorLabel->Name = L"pixelColorLabel";
			this->pixelColorLabel->Size = System::Drawing::Size(99, 20);
			this->pixelColorLabel->Text = L"RGB=[R, G, B]";
			this->pixelColorLabel->Visible = false;
			// 
			// imageSizeLabel
			// 
			this->imageSizeLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageSizeLabel.Image")));
			this->imageSizeLabel->Name = L"imageSizeLabel";
			this->imageSizeLabel->Size = System::Drawing::Size(61, 20);
			this->imageSizeLabel->Text = L"WxH";
			this->imageSizeLabel->Visible = false;
			// 
			// pictureBoxPanel
			// 
			this->pictureBoxPanel->AutoScroll = true;
			this->pictureBoxPanel->Controls->Add(this->pictureBox);
			this->pictureBoxPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBoxPanel->Location = System::Drawing::Point(0, 0);
			this->pictureBoxPanel->Name = L"pictureBoxPanel";
			this->pictureBoxPanel->Size = System::Drawing::Size(743, 435);
			this->pictureBoxPanel->TabIndex = 1;
			// 
			// pictureBox
			// 
			this->pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox->Location = System::Drawing::Point(0, 0);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(743, 435);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			this->pictureBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseDown);
			this->pictureBox->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox_MouseEnter);
			this->pictureBox->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox_MouseLeave);
			this->pictureBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseMove);
			this->pictureBox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseUp);
			// 
			// menuStrip
			// 
			this->menuStrip->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->imageToolStripMenuItem, this->drawToolStripMenuItem, this->penToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(743, 28);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->openFileMenu,
					this->saveFileMenu, this->saveAsFileMenu, this->toolStripSeparator3, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// openFileMenu
			// 
			this->openFileMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openFileMenu.Image")));
			this->openFileMenu->Name = L"openFileMenu";
			this->openFileMenu->Size = System::Drawing::Size(156, 26);
			this->openFileMenu->Text = L"&Open";
			this->openFileMenu->Click += gcnew System::EventHandler(this, &MyForm::openFileMenu_Click);
			// 
			// saveFileMenu
			// 
			this->saveFileMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveFileMenu.Image")));
			this->saveFileMenu->Name = L"saveFileMenu";
			this->saveFileMenu->Size = System::Drawing::Size(156, 26);
			this->saveFileMenu->Text = L"&Save";
			this->saveFileMenu->Click += gcnew System::EventHandler(this, &MyForm::saveFileMenu_Click);
			// 
			// saveAsFileMenu
			// 
			this->saveAsFileMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveAsFileMenu.Image")));
			this->saveAsFileMenu->Name = L"saveAsFileMenu";
			this->saveAsFileMenu->Size = System::Drawing::Size(156, 26);
			this->saveAsFileMenu->Text = L"Save &As ...";
			this->saveAsFileMenu->Click += gcnew System::EventHandler(this, &MyForm::saveAsFileMenu_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(153, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// imageToolStripMenuItem
			// 
			this->imageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->drawLineToolStripMenuItem,
					this->deawEllipseToolStripMenuItem, this->convertToHSVToolStripMenuItem, this->convertToGrayToolStripMenuItem, this->convertToRGBToolStripMenuItem,
					this->blurToolStripMenuItem
			});
			this->imageToolStripMenuItem->Name = L"imageToolStripMenuItem";
			this->imageToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->imageToolStripMenuItem->Text = L"&Image";
			// 
			// drawLineToolStripMenuItem
			// 
			this->drawLineToolStripMenuItem->Name = L"drawLineToolStripMenuItem";
			this->drawLineToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->drawLineToolStripMenuItem->Text = L"Draw Line";
			this->drawLineToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::drawLineToolStripMenuItem_Click);
			// 
			// deawEllipseToolStripMenuItem
			// 
			this->deawEllipseToolStripMenuItem->Name = L"deawEllipseToolStripMenuItem";
			this->deawEllipseToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->deawEllipseToolStripMenuItem->Text = L"Deaw Ellipse";
			this->deawEllipseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deawEllipseToolStripMenuItem_Click);
			// 
			// convertToHSVToolStripMenuItem
			// 
			this->convertToHSVToolStripMenuItem->Name = L"convertToHSVToolStripMenuItem";
			this->convertToHSVToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->convertToHSVToolStripMenuItem->Text = L"Convert to HSV";
			this->convertToHSVToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::convertToHSVToolStripMenuItem_Click);
			// 
			// convertToGrayToolStripMenuItem
			// 
			this->convertToGrayToolStripMenuItem->Name = L"convertToGrayToolStripMenuItem";
			this->convertToGrayToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->convertToGrayToolStripMenuItem->Text = L"Convert to Gray";
			this->convertToGrayToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::convertToGrayToolStripMenuItem_Click);
			// 
			// blurToolStripMenuItem
			// 
			this->blurToolStripMenuItem->Name = L"blurToolStripMenuItem";
			this->blurToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->blurToolStripMenuItem->Text = L"Blur";
			this->blurToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::blurToolStripMenuItem_Click);
			// 
			// convertToRGBToolStripMenuItem
			// 
			this->convertToRGBToolStripMenuItem->Name = L"convertToRGBToolStripMenuItem";
			this->convertToRGBToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->convertToRGBToolStripMenuItem->Text = L"Convert to RGB";
			this->convertToRGBToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::convertToRGBToolStripMenuItem_Click);
			// 
			// drawToolStripMenuItem
			// 
			this->drawToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->circleToolStripMenuItem,
					this->freeHandToolStripMenuItem, this->triangleToolStripMenuItem, this->squareToolStripMenuItem
			});
			this->drawToolStripMenuItem->Name = L"drawToolStripMenuItem";
			this->drawToolStripMenuItem->Size = System::Drawing::Size(56, 24);
			this->drawToolStripMenuItem->Text = L"draw";
			// 
			// circleToolStripMenuItem
			// 
			this->circleToolStripMenuItem->Name = L"circleToolStripMenuItem";
			this->circleToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->circleToolStripMenuItem->Text = L"Circle";
			this->circleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::circleToolStripMenuItem_Click);
			// 
			// freeHandToolStripMenuItem
			// 
			this->freeHandToolStripMenuItem->Name = L"freeHandToolStripMenuItem";
			this->freeHandToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->freeHandToolStripMenuItem->Text = L"Free Hand";
			this->freeHandToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::freeHandToolStripMenuItem_Click);
			// 
			// triangleToolStripMenuItem
			// 
			this->triangleToolStripMenuItem->Name = L"triangleToolStripMenuItem";
			this->triangleToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->triangleToolStripMenuItem->Text = L"Triangle";
			this->triangleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::triangleToolStripMenuItem_Click);
			// 
			// squareToolStripMenuItem
			// 
			this->squareToolStripMenuItem->Name = L"squareToolStripMenuItem";
			this->squareToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->squareToolStripMenuItem->Text = L"Square";
			this->squareToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::squareToolStripMenuItem_Click);
			// 
			// penToolStripMenuItem
			// 
			this->penToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->penSize,
					this->pencolor
			});
			this->penToolStripMenuItem->Name = L"penToolStripMenuItem";
			this->penToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->penToolStripMenuItem->Text = L"Pen";
			// 
			// penSize
			// 
			this->penSize->Items->AddRange(gcnew cli::array< System::Object^  >(9) { L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9" });
			this->penSize->Name = L"penSize";
			this->penSize->Size = System::Drawing::Size(121, 28);
			this->penSize->Sorted = true;
			this->penSize->Text = L"1";
			this->penSize->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::penSize_SelectedIndexChanged);
			// 
			// pencolor
			// 
			this->pencolor->BackColor = System::Drawing::SystemColors::Control;
			this->pencolor->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pencolor->Name = L"pencolor";
			this->pencolor->Size = System::Drawing::Size(195, 26);
			this->pencolor->Text = L"Color";
			this->pencolor->Click += gcnew System::EventHandler(this, &MyForm::pencolorToolStripMenuItem_Click);
			// 
			// toolStrip
			// 
			this->toolStrip->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(16) {
				this->openFileButton, this->saveFileButton,
					this->saveAsFileButton, this->toolStripSeparator1, this->toolStripButton1, this->penSizetoolStripComboBox, this->colorButton,
					this->toolStripButton4, this->toolStripButton5, this->toolStripButton2, this->toolStripSeparator2, this->toolStripButton3, this->toolStripButton6,
					this->fillColor, this->enterText, this->putTxt
			});
			this->toolStrip->Location = System::Drawing::Point(4, 28);
			this->toolStrip->Name = L"toolStrip";
			this->toolStrip->Size = System::Drawing::Size(557, 28);
			this->toolStrip->TabIndex = 1;
			// 
			// openFileButton
			// 
			this->openFileButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openFileButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openFileButton.Image")));
			this->openFileButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openFileButton->Name = L"openFileButton";
			this->openFileButton->Size = System::Drawing::Size(29, 25);
			this->openFileButton->Text = L"toolStripButton1";
			this->openFileButton->Click += gcnew System::EventHandler(this, &MyForm::openFileMenu_Click);
			// 
			// saveFileButton
			// 
			this->saveFileButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveFileButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveFileButton.Image")));
			this->saveFileButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveFileButton->Name = L"saveFileButton";
			this->saveFileButton->Size = System::Drawing::Size(29, 25);
			this->saveFileButton->Text = L"toolStripButton2";
			this->saveFileButton->Click += gcnew System::EventHandler(this, &MyForm::saveFileMenu_Click);
			// 
			// saveAsFileButton
			// 
			this->saveAsFileButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveAsFileButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveAsFileButton.Image")));
			this->saveAsFileButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveAsFileButton->Name = L"saveAsFileButton";
			this->saveAsFileButton->Size = System::Drawing::Size(29, 25);
			this->saveAsFileButton->Text = L"toolStripButton3";
			this->saveAsFileButton->Click += gcnew System::EventHandler(this, &MyForm::saveAsFileMenu_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 28);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->solidLineToolStripMenuItem,
					this->dashedLineToolStripMenuItem
			});
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(34, 25);
			this->toolStripButton1->Text = L"toolStripButton1";
			// 
			// solidLineToolStripMenuItem
			// 
			this->solidLineToolStripMenuItem->Name = L"solidLineToolStripMenuItem";
			this->solidLineToolStripMenuItem->Size = System::Drawing::Size(173, 26);
			this->solidLineToolStripMenuItem->Text = L"Solid Line";
			this->solidLineToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::freeHandToolStripMenuItem_Click);
			// 
			// dashedLineToolStripMenuItem
			// 
			this->dashedLineToolStripMenuItem->Name = L"dashedLineToolStripMenuItem";
			this->dashedLineToolStripMenuItem->Size = System::Drawing::Size(173, 26);
			this->dashedLineToolStripMenuItem->Text = L"Dashed Line";
			this->dashedLineToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dashedLineToolStripMenuItem_Click);
			// 
			// penSizetoolStripComboBox
			// 
			this->penSizetoolStripComboBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(9) {
				L"1", L"2", L"3",
					L"4", L"5", L"6", L"7", L"8", L"9"
			});
			this->penSizetoolStripComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->penSizetoolStripComboBox->Name = L"penSizetoolStripComboBox";
			this->penSizetoolStripComboBox->Size = System::Drawing::Size(75, 28);
			this->penSizetoolStripComboBox->Sorted = true;
			this->penSizetoolStripComboBox->Text = L"1";
			this->penSizetoolStripComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::penSizetoolStripComboBox_SelectedIndexChanged);
			// 
			// colorButton
			// 
			this->colorButton->BackColor = System::Drawing::Color::Black;
			this->colorButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::None;
			this->colorButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->colorButton->Name = L"colorButton";
			this->colorButton->Size = System::Drawing::Size(29, 25);
			this->colorButton->Text = L"toolStripButton2";
			this->colorButton->Click += gcnew System::EventHandler(this, &MyForm::pencolorToolStripMenuItem_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(29, 25);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::drawLineToolStripMenuItem_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(29, 25);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::deawEllipseToolStripMenuItem_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(29, 25);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::triangleToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 28);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(29, 25);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::squareToolStripMenuItem_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(29, 25);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click);
			// 
			// fillColor
			// 
			this->fillColor->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->fillColor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fillColor.Image")));
			this->fillColor->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->fillColor->Name = L"fillColor";
			this->fillColor->Size = System::Drawing::Size(29, 25);
			this->fillColor->Text = L"toolStripButton7";
			this->fillColor->Click += gcnew System::EventHandler(this, &MyForm::fillColor_Click);
			// 
			// enterText
			// 
			this->enterText->Name = L"enterText";
			this->enterText->Size = System::Drawing::Size(100, 28);
			this->enterText->Text = L"Text";
			// 
			// putTxt
			// 
			this->putTxt->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->putTxt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"putTxt.Image")));
			this->putTxt->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->putTxt->Name = L"putTxt";
			this->putTxt->Size = System::Drawing::Size(29, 25);
			this->putTxt->Text = L"toolStripButton7";
			this->putTxt->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton7_Click);
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"Image file|*.jpg;*.png";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->DefaultExt = L"png";
			this->saveFileDialog->Filter = L"Image file|*.jpg;*.png";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(743, 517);
			this->Controls->Add(this->toolStripContainer);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->toolStripContainer->BottomToolStripPanel->ResumeLayout(false);
			this->toolStripContainer->BottomToolStripPanel->PerformLayout();
			this->toolStripContainer->ContentPanel->ResumeLayout(false);
			this->toolStripContainer->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer->TopToolStripPanel->PerformLayout();
			this->toolStripContainer->ResumeLayout(false);
			this->toolStripContainer->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->pictureBoxPanel->ResumeLayout(false);
			this->pictureBoxPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->toolStrip->ResumeLayout(false);
			this->toolStrip->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private:
			Bitmap^ bmp; // Declare application bitmap image
private: System::Void openFileMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		Bitmap^ image = gcnew Bitmap(openFileDialog->FileName);
		// Convert image to 2 bits RGB
		bmp = gcnew Bitmap(image->Size.Width, image->Size.Height, Imaging::PixelFormat::Format24bppRgb);
		bmp->SetResolution(image->HorizontalResolution, image->VerticalResolution);
		Graphics^ g = Graphics::FromImage(bmp);
		g->DrawImage(image, 0, 0);
		delete image;
		pictureBox->Image = bmp;
		imageSizeLabel->Text = System::String::Format("{0}x{1}", bmp->Width, bmp->Height);
		imageSizeLabel->Visible = true;
	}
}
private: System::Void saveFileMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {
		bmp->Save(openFileDialog->FileName);
	}
}
private: System::Void saveAsFileMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((bmp != nullptr) && (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)) {
		bmp->Save(saveFileDialog->FileName);
	}
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void drawLineToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {
		drawState = DrawState::DrawLine;
		Cursor = Cursors::Cross;
	}
}
private: System::Void deawEllipseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {
		drawState = DrawState::DrawEllipse;
		Cursor = Cursors::Cross;
	}
}
private: System::Void convertToHSVToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Lock Bitmap Bits
	Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
	System::Drawing::Imaging::BitmapData^ bmpData =
		bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
	// using OpenCV: Create Image with data pointer
	Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
	// Do OpenCV function
	cvtColor(image, image, COLOR_BGR2HSV);
	// Unlock Bitmap Bits
	bmp->UnlockBits(bmpData);
	pictureBox->Image = bmp; // Show result
}
private: System::Void pictureBox_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	pixelPointLabel->Visible = true; pixelColorLabel->Visible = true;
}
private: System::Void pictureBox_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	pixelPointLabel->Visible = false, pixelColorLabel->Visible = false;
}
private: System::Void pictureBox_MouseMove(System::Object^ sender, MouseEventArgs^ e) {
	if (bmp == nullptr) return;
	if ((e->X >= 0) && (e->X < bmp->Width) && (e->Y >= 0) && (e->Y < bmp->Height)) {
		pixelPointLabel->Text = System::String::Format("{0}, {1}", e->X, e->Y);
		Color c = bmp->GetPixel(e->X, e->Y);
		pixelColorLabel->Text = System::String::Format("RGB=[{0}, {1}, {2}]", c.R, c.G, c.B);
	}
	Color selectedColor = colorDialog->Color;
	cv::Scalar colorScalar(selectedColor.B, selectedColor.G, selectedColor.R);

	if ((drawState == DrawState::DrawingLine) || (drawState == DrawState::DrawingEllipse) || 
		(drawState == DrawState::DrawingCircle) || (drawState == DrawState::DrawingTriangle) || 
		(drawState == DrawState::DrawingSquare) || (drawState == DrawState::DrawingFillColor) ||
		(drawState == DrawState::DrawingPutText)) {
		if (tmpImage != nullptr) delete tmpImage;
		tmpImage = (Bitmap^)bmp->Clone();

		

		// Lock Bitmap Bits 
		Rectangle rect = Rectangle(0, 0, tmpImage->Width, tmpImage->Height);
		System::Drawing::Imaging::BitmapData^ tmpImageData =
			tmpImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, tmpImage->PixelFormat);
		// Using OpenCv: Creat Image with data pointer
		Mat image(tmpImage->Height, tmpImage->Width, CV_8UC3, tmpImageData->Scan0.ToPointer(), tmpImageData->Stride);
		// Do OpenCv function
		switch (drawState) {
		case DrawState::DrawingLine:
			line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, e->Y), colorScalar, sizepen);
			break;
		case DrawState::DrawingEllipse:
		{
			int dx = Math::Abs(startPoint->X - e->X);
			int dy = Math::Abs(startPoint->Y - e->Y);
			ellipse(image, cv::Point(startPoint->X, startPoint->Y),
				cv::Size(dx, dy),
				Math::Atan2(dy, dx), 0, 360,
				colorScalar, sizepen);
			break;
		}
		case DrawState::DrawingCircle:
		{
			int radius = Math::Sqrt(Math::Pow((e->X - startPoint->X), 2) + Math::Pow((e->Y - startPoint->Y), 1));
			circle(image, cv::Point(startPoint->X, startPoint->Y), radius, colorScalar, sizepen); // The last parameter (2) is the thickness of the circle
			break;
		}
		case DrawState::DrawingTriangle:
		{
			//cv::Point vertices[3] = { cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, startPoint->Y), cv::Point(e->X, e->Y) };
			//fillConvexPoly(image, vertices, 3, colorScalar);
			line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, e->Y), colorScalar, sizepen);
			line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(startPoint->X, e->Y), colorScalar, sizepen);
			line(image, cv::Point(startPoint->X, e->Y), cv::Point(e->X, e->Y), colorScalar, sizepen);
			break;
		}
		case DrawState::DrawingSquare:
		{
			std::vector<cv::Point> pointsData = { cv::Point(startPoint->X, startPoint->Y), cv::Point(startPoint->X, e->Y), cv::Point(e->X, e->Y), cv::Point(e->X, startPoint->Y) };
			polylines(image, pointsData, true, colorScalar, sizepen);
			break;
		}
		case DrawState::DrawingFillColor:
		{
			Scalar fillColor = Scalar(0, 255, 0);
			floodFill(image, cv::Point(startPoint->X, startPoint->Y), colorScalar, 0, Scalar::all(20), Scalar::all(20), FLOODFILL_FIXED_RANGE);
			break;
		}
		case DrawState::DrawingPutText:
		{
			putText(image, (const cv::String)put_cv_text, cv::Point(e->X, e->Y), FONT_HERSHEY_SIMPLEX, sizepen, colorScalar, 2);
			break;
		}
		}
		//Unlock Bitmap Bits
		tmpImage->UnlockBits(tmpImageData);
		pictureBox->Image = tmpImage; // show result
		if (drawState == DrawState::DrawingFillColor) {
			delete startPoint;
			startPoint = nullptr;
			delete bmp;
			bmp = tmpImage;
			tmpImage = nullptr;
			drawState = DrawState::NotDrawing;
			Cursor = Cursors::Default;
		}
	}
	if ((drawState == DrawState::DrawingFreeHand) || (drawState == DrawState::DrawingDashed))
	{
		if (tmpImage != nullptr)
		{
			delete bmp;
			bmp = (Bitmap^)tmpImage->Clone();
			delete tmpImage;
		}
		else if (tmpImage == nullptr)
		{
			x = startPoint->X;
			y = startPoint->Y;
		}
		tmpImage = (Bitmap^)bmp->Clone();
		// Lock Bitmap Bits 
		Rectangle rect = Rectangle(0, 0, tmpImage->Width, tmpImage->Height);
		System::Drawing::Imaging::BitmapData^ tmpImageData =
			tmpImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, tmpImage->PixelFormat);
		// Using OpenCv: Creat Image with data pointer
		Mat image(tmpImage->Height, tmpImage->Width, CV_8UC3, tmpImageData->Scan0.ToPointer(), tmpImageData->Stride);

		switch (drawState) {
		case DrawState::DrawingFreeHand:
		{
			line(image, cv::Point(x, y), cv::Point(e->X, e->Y), colorScalar, sizepen);
			x = e->X;
			y = e->Y;
			break;
		}
		case DrawState::DrawingDashed:
		{
			// Draw dashed line
			int dashLength = sizepen * 5;
			int gapLength = sizepen * 5;

			cv::Point startPoint(x, y);
			cv::Point endPoint(e->X, e->Y);

			cv::Point delta = endPoint - startPoint;
			cv::Point direction = delta / norm(delta);

			int dashes = cvRound(norm(delta) / (dashLength + gapLength));

			for (int i = 0; i < dashes; ++i) {
				cv::Point dashEnd = startPoint + direction * dashLength;
				line(image, startPoint, dashEnd, colorScalar, sizepen);
				startPoint = dashEnd + direction * gapLength;
				x = e->X; y = e->Y;
			}
		}
		}

		//Unlock Bitmap Bits
		tmpImage->UnlockBits(tmpImageData);
		pictureBox->Image = tmpImage; // show result
	}
}

enum class DrawState {
	NotDrawing,
	DrawLine, DrawingLine,
	DrawEllipse, DrawingEllipse,
	DrawCircle, DrawingCircle,
	DrawFreeHand, DrawingFreeHand,
	DrawTriangle, DrawingTriangle,
	DrawSquare, DrawingSquare,
	DrawDashed, DrawingDashed,
	DrawFillColor, DrawingFillColor,
	DrawPutText, DrawingPutText,

} drawState;

	   System::Drawing::Point^ startPoint;
	   Bitmap^ tmpImage;
	   int x = 0; int y = 0;
private: System::Void pictureBox_MouseDown(System::Object^ sender, MouseEventArgs^ e) {
	if (bmp != nullptr) {
		switch (drawState) {
		case DrawState::DrawLine:
		case DrawState::DrawEllipse:
		case DrawState::DrawCircle:
		case DrawState::DrawFreeHand:
		case DrawState::DrawTriangle:
		case DrawState::DrawSquare:
		case DrawState::DrawDashed:
		case DrawState::DrawFillColor:
		case DrawState::DrawPutText:
			startPoint = gcnew System::Drawing::Point(e->X, e->Y);
			if (drawState == DrawState::DrawLine)
				drawState = DrawState::DrawingLine;
			else if (drawState == DrawState::DrawEllipse)
				drawState = DrawState::DrawingEllipse;
			else if (drawState == DrawState::DrawCircle)
				drawState = DrawState::DrawingCircle;
			else if (drawState == DrawState::DrawFreeHand)
				drawState = DrawState::DrawingFreeHand;
			else if (drawState == DrawState::DrawTriangle)
				drawState = DrawState::DrawingTriangle;
			else if (drawState == DrawState::DrawSquare)
				drawState = DrawState::DrawingSquare;
			else if (drawState == DrawState::DrawDashed)
				drawState = DrawState::DrawingDashed;
			else if (drawState == DrawState::DrawFillColor)
				drawState = DrawState::DrawingFillColor;
			else if (drawState == DrawState::DrawPutText)
				drawState = DrawState::DrawingPutText;
		}
	}
}
private: System::Void pictureBox_MouseUp(System::Object^ sender, MouseEventArgs^ e) {
	if ((drawState == DrawState::DrawingLine) || (drawState == DrawState::DrawingEllipse) || 
		(drawState == DrawState::DrawingCircle) || (drawState == DrawState::DrawingFreeHand) ||
		(drawState == DrawState::DrawingTriangle) || (drawState == DrawState::DrawingSquare) ||
		(drawState == DrawState::DrawingDashed) || (drawState == DrawState::DrawingPutText)) {
		delete startPoint;
		startPoint = nullptr;
		delete bmp;
		bmp = tmpImage;
		tmpImage = nullptr;
		drawState = DrawState::NotDrawing;
		Cursor = Cursors::Default;
	}
}
private: System::Void convertToGrayToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Lock Bitmap Bits
	Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
	System::Drawing::Imaging::BitmapData^ bmpData =
		bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, System::Drawing::Imaging::PixelFormat::Format24bppRgb);

	// using OpenCV: Create Image with data pointer
	Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);

	// Create a new Mat for the grayscale image
	Mat grayImage;

	// Convert to grayscale
	cvtColor(image, grayImage, COLOR_BGR2GRAY);

	// Lock the new grayscale Mat
	uchar* grayData = grayImage.ptr();
	int grayStride = grayImage.step;

	// Copy the grayscale data back to the original image
	for (int y = 0; y < grayImage.rows; y++) {
		for (int x = 0; x < grayImage.cols; x++) {
			uchar grayValue = grayData[y * grayStride + x];
			image.at<Vec3b>(y, x) = Vec3b(grayValue, grayValue, grayValue);
		}
	}

	// Unlock Bitmap Bits
	bmp->UnlockBits(bmpData);
	pictureBox->Image = bmp; // Show result
}
private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	CameraForm^ cameraform = gcnew CameraForm();
	cameraform->ShowDialog();
}
private: System::Void circleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {
		drawState = DrawState::DrawCircle;
		Cursor = Cursors::Cross;
	}
}
private: System::Void freeHandToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {
		drawState = DrawState::DrawFreeHand;
		Cursor = Cursors::Cross;
	}
}
private: System::Void triangleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {
		drawState = DrawState::DrawTriangle;
		Cursor = Cursors::Cross;
	}
}
private: System::Void squareToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {
		drawState = DrawState::DrawSquare;
		Cursor = Cursors::Cross;
	}
}
	 int sizepen = 1;
private: System::Void penSize_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	 sizepen = System::Convert::ToInt32(penSize->SelectedItem->ToString());
	 penSizetoolStripComboBox->SelectedItem = penSize->SelectedItem->ToString();
}
private: System::Void pencolorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// Get the selected color
		Color selectedColor = colorDialog->Color;

		// Convert the Color to a hex string
		System::String^ hexColor = System::String::Format("#{0:X2}{1:X2}{2:X2}", selectedColor.R, selectedColor.G, selectedColor.B);

		// Update the label's background color and text
		colorButton->BackColor = selectedColor;
		pencolor->Text = hexColor;

	}
}
private: System::Void penSizetoolStripComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	sizepen = System::Convert::ToInt32(penSizetoolStripComboBox->SelectedItem->ToString());
	penSize->SelectedItem = penSizetoolStripComboBox->SelectedItem->ToString();
}
private: System::Void dashedLineToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {
		drawState = DrawState::DrawDashed;
		Cursor = Cursors::Cross;
	}
}
private: System::Void fillColor_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {
		drawState = DrawState::DrawFillColor;
		Cursor = Cursors::Cross;
	}
}
private: System::Void blurToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Lock Bitmap Bits
	Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
	System::Drawing::Imaging::BitmapData^ bmpData =
		bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
	// using OpenCV: Create Image with data pointer
	Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
	// Do OpenCV function
	GaussianBlur(image, image, cv::Size(5, 5), 0, 0);
	// Unlock Bitmap Bits
	bmp->UnlockBits(bmpData);
	pictureBox->Image = bmp; // Show result
}
	   const char* put_cv_text;
private: System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {

		using namespace System::Runtime::InteropServices;
		put_cv_text = (const char*)(Marshal::StringToHGlobalAnsi(enterText->Text)).ToPointer();
		drawState = DrawState::DrawPutText;
		Cursor = Cursors::Cross;
	}
}
private: System::Void convertToRGBToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Lock Bitmap Bits
	Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
	System::Drawing::Imaging::BitmapData^ bmpData =
		bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
	// using OpenCV: Create Image with data pointer
	Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
	// Do OpenCV function
	cvtColor(image, image, COLOR_BGR2RGB);
	// Unlock Bitmap Bits
	bmp->UnlockBits(bmpData);
	pictureBox->Image = bmp; // Show result
}
};
}
	