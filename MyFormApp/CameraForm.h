#pragma once

#include <opencv2/videoio.hpp>

using namespace cv;

namespace MyFormApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CameraForm
	/// </summary>
	public ref class CameraForm : public System::Windows::Forms::Form
	{
	public:
		CameraForm(void)
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
		~CameraForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::Label^ ImageSizeLabel;
	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::Label^ captureFPSLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ captureWHLabel;

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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->ImageSizeLabel = (gcnew System::Windows::Forms::Label());
			this->captureWHLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->captureFPSLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->captureFPSLabel);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Panel2->Controls->Add(this->captureWHLabel);
			this->splitContainer1->Panel2->Controls->Add(this->startButton);
			this->splitContainer1->Panel2->Controls->Add(this->ImageSizeLabel);
			this->splitContainer1->Size = System::Drawing::Size(483, 388);
			this->splitContainer1->SplitterDistance = 291;
			this->splitContainer1->TabIndex = 0;
			// 
			// pictureBox
			// 
			this->pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox->Location = System::Drawing::Point(0, 0);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(291, 388);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			// 
			// startButton
			// 
			this->startButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->startButton->Location = System::Drawing::Point(90, 344);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(75, 23);
			this->startButton->TabIndex = 1;
			this->startButton->Text = L"start";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &CameraForm::startButton_Click);
			// 
			// ImageSizeLabel
			// 
			this->ImageSizeLabel->AutoSize = true;
			this->ImageSizeLabel->Location = System::Drawing::Point(15, 25);
			this->ImageSizeLabel->Name = L"ImageSizeLabel";
			this->ImageSizeLabel->Size = System::Drawing::Size(44, 16);
			this->ImageSizeLabel->TabIndex = 0;
			this->ImageSizeLabel->Text = L"label1";
			// 
			// captureWHLabel
			// 
			this->captureWHLabel->AutoSize = true;
			this->captureWHLabel->Location = System::Drawing::Point(120, 25);
			this->captureWHLabel->Name = L"captureWHLabel";
			this->captureWHLabel->Size = System::Drawing::Size(44, 16);
			this->captureWHLabel->TabIndex = 2;
			this->captureWHLabel->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// captureFPSLabel
			// 
			this->captureFPSLabel->AutoSize = true;
			this->captureFPSLabel->Location = System::Drawing::Point(123, 62);
			this->captureFPSLabel->Name = L"captureFPSLabel";
			this->captureFPSLabel->Size = System::Drawing::Size(44, 16);
			this->captureFPSLabel->TabIndex = 4;
			this->captureFPSLabel->Text = L"label3";
			// 
			// CameraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 388);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"CameraForm";
			this->Text = L"CameraForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Bitmap^ bmp;
		bool isStart = false;
	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isStart) {
			isStart = false;
			startButton->Text = "Start";
			return;
		}

		VideoCapture capture(0);
		while (!capture.isOpened());
		int capWidth = (int)capture.get(CAP_PROP_FRAME_WIDTH);
		int capheight = (int)capture.get(CAP_PROP_FRAME_HEIGHT);
		int capFPS = (int)capture.get(CAP_PROP_FPS);
		captureWHLabel->Text = System::String::Format("{0:D}x{1:D}", capWidth, capheight);
		captureFPSLabel->Text = System::String::Format("{0:D}", capFPS);
		isStart = true;
		bmp = gcnew Bitmap(capWidth, capheight, Imaging::PixelFormat::Format24bppRgb);
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		startButton->Text = "Stop";
		while (isStart) {
			System::Drawing::Imaging::BitmapData^ bmpData = bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite,bmp->PixelFormat);
			// Using OpenCV: Create Image with data pointer
			Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
			capture.read(image);
			// Unlock Bitmap Bits
			bmp->UnlockBits(bmpData);
			pictureBox->Image = bmp;
			Application::DoEvents();
		}
	}
};
}
