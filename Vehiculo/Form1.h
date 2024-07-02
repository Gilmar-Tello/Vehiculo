#pragma once
#include "MySQLConnector.h"
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector;
	private: System::Windows::Forms::DataGridView^ grdDatos;
	public:
	public:
		MySqlConnection^ connection;

	public:
		Form1(void)
		{
			InitializeComponent();
			connector = gcnew MySQLConnector();
			connection = gcnew MySqlConnection(connector->connectionString);
			this->grdDatos->SelectionChanged += gcnew System::EventHandler(this, &Form1::grdDatos_SelectionChanged);
			//this->btnEliminar->Click += gcnew System::EventHandler(this, &Form1::btnEliminar_Click);



			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ VEHICULO;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtPais;


	private: System::Windows::Forms::TextBox^ txtAnio;
	private: System::Windows::Forms::TextBox^ txtPlaca;
	private: System::Windows::Forms::TextBox^ txtMarca;
	private: System::Windows::Forms::DateTimePicker^ Fecha;
	private: System::Windows::Forms::Button^ btnInsertar;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::Button^ btnActualizar;
	private: System::Windows::Forms::Button^ btnEliminar;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private:
		bool isEditMode = false;
		int selectedId = -1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->VEHICULO = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtPais = (gcnew System::Windows::Forms::TextBox());
			this->txtAnio = (gcnew System::Windows::Forms::TextBox());
			this->txtPlaca = (gcnew System::Windows::Forms::TextBox());
			this->txtMarca = (gcnew System::Windows::Forms::TextBox());
			this->Fecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->grdDatos = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdDatos))->BeginInit();
			this->SuspendLayout();
			// 
			// VEHICULO
			// 
			this->VEHICULO->AutoSize = true;
			this->VEHICULO->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VEHICULO->Location = System::Drawing::Point(372, 9);
			this->VEHICULO->Name = L"VEHICULO";
			this->VEHICULO->Size = System::Drawing::Size(129, 27);
			this->VEHICULO->TabIndex = 0;
			this->VEHICULO->Text = L"VEHICULO";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(207, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"NOMBRE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(229, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"AÑO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(160, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(225, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"PAIS FABRICACION";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(229, 303);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 27);
			this->label4->TabIndex = 4;
			this->label4->Text = L"PLACA";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(216, 388);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 27);
			this->label5->TabIndex = 5;
			this->label5->Text = L"MARCA";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(160, 461);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(252, 27);
			this->label6->TabIndex = 6;
			this->label6->Text = L"FECHA DE CREACION";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(58, 92);
			this->txtNombre->Multiline = true;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(494, 40);
			this->txtNombre->TabIndex = 7;
			// 
			// txtPais
			// 
			this->txtPais->Location = System::Drawing::Point(58, 248);
			this->txtPais->Multiline = true;
			this->txtPais->Name = L"txtPais";
			this->txtPais->Size = System::Drawing::Size(494, 40);
			this->txtPais->TabIndex = 8;
			// 
			// txtAnio
			// 
			this->txtAnio->Location = System::Drawing::Point(58, 165);
			this->txtAnio->Multiline = true;
			this->txtAnio->Name = L"txtAnio";
			this->txtAnio->Size = System::Drawing::Size(494, 40);
			this->txtAnio->TabIndex = 9;
			// 
			// txtPlaca
			// 
			this->txtPlaca->Location = System::Drawing::Point(70, 333);
			this->txtPlaca->Multiline = true;
			this->txtPlaca->Name = L"txtPlaca";
			this->txtPlaca->Size = System::Drawing::Size(482, 40);
			this->txtPlaca->TabIndex = 10;
			// 
			// txtMarca
			// 
			this->txtMarca->Location = System::Drawing::Point(70, 418);
			this->txtMarca->Multiline = true;
			this->txtMarca->Name = L"txtMarca";
			this->txtMarca->Size = System::Drawing::Size(482, 40);
			this->txtMarca->TabIndex = 11;
			// 
			// Fecha
			// 
			this->Fecha->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fecha->Location = System::Drawing::Point(153, 504);
			this->Fecha->Name = L"Fecha";
			this->Fecha->Size = System::Drawing::Size(279, 22);
			this->Fecha->TabIndex = 12;
			// 
			// btnInsertar
			// 
			this->btnInsertar->Location = System::Drawing::Point(582, 124);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(152, 49);
			this->btnInsertar->TabIndex = 13;
			this->btnInsertar->Text = L"INSERTAR";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &Form1::btnInsertar_Click);
			// 
			// btnMostrar
			// 
			this->btnMostrar->Location = System::Drawing::Point(582, 200);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(152, 49);
			this->btnMostrar->TabIndex = 14;
			this->btnMostrar->Text = L"MOSTRAR";
			this->btnMostrar->UseVisualStyleBackColor = true;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &Form1::btnMostrar_Click);
			// 
			// btnActualizar
			// 
			this->btnActualizar->Location = System::Drawing::Point(582, 268);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(152, 49);
			this->btnActualizar->TabIndex = 15;
			this->btnActualizar->Text = L"ACTUALIZAR";
			this->btnActualizar->UseVisualStyleBackColor = true;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &Form1::btnActualizar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(582, 344);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(152, 49);
			this->btnEliminar->TabIndex = 16;
			this->btnEliminar->Text = L"ELIMINAR";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &Form1::btnEliminar_Click);
			// 
			// grdDatos
			// 
			this->grdDatos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdDatos->Location = System::Drawing::Point(12, 574);
			this->grdDatos->Name = L"grdDatos";
			this->grdDatos->RowHeadersWidth = 51;
			this->grdDatos->RowTemplate->Height = 24;
			this->grdDatos->Size = System::Drawing::Size(840, 174);
			this->grdDatos->TabIndex = 17;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(864, 774);
			this->Controls->Add(this->grdDatos);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnActualizar);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnInsertar);
			this->Controls->Add(this->Fecha);
			this->Controls->Add(this->txtMarca);
			this->Controls->Add(this->txtPlaca);
			this->Controls->Add(this->txtAnio);
			this->Controls->Add(this->txtPais);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->VEHICULO);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdDatos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion





private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Recuperar datos del formulario
	String^ nombre = txtNombre->Text;
	String^ anio = txtAnio->Text;
	String^ pais = txtPais->Text;
	String^ placa = txtPlaca->Text;
	String^ marca = txtMarca->Text;
	String^ fecha = Fecha->Value.ToString("yyyy-MM-dd"); // Formato de fecha a AAAA-MM-DD

	// Verificar que todos los campos están llenos
	if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(anio) || String::IsNullOrWhiteSpace(pais) ||
		String::IsNullOrWhiteSpace(placa) || String::IsNullOrWhiteSpace(marca)) {
		MessageBox::Show("Por favor, complete todos los campos.", "Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Crear la consulta SQL de inserción
	String^ query = "INSERT INTO vehiculo (nombre, anio, pais_fabricacion, placa, marca, fecha_de_creacion) VALUES (@nombre, @anio, @pais, @placa, @marca, @fecha)";

	try {
		// Establecer la conexión
		connection->Open();

		// Crear el comando MySqlCommand
		MySqlCommand^ command = gcnew MySqlCommand(query, connection);

		// Añadir los parámetros
		command->Parameters->AddWithValue("@nombre", nombre);
		command->Parameters->AddWithValue("@anio", anio);
		command->Parameters->AddWithValue("@pais", pais);
		command->Parameters->AddWithValue("@placa", placa);
		command->Parameters->AddWithValue("@marca", marca);
		command->Parameters->AddWithValue("@fecha", fecha);

		// Ejecutar la consulta
		int rowsAffected = command->ExecuteNonQuery();

		// Verificar el resultado
		if (rowsAffected > 0) {
			MessageBox::Show("Vehículo insertado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se pudo insertar el vehículo.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (MySqlException^ ex) {
		// Manejar la excepción
		MessageBox::Show("Ocurrió un error al insertar el vehículo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Asegurarse de cerrar la conexión
		if (connection->State == ConnectionState::Open) {
			connection->Close();
		}
	}
}
		private: DataTable^ ObtenerDatos() {
			DataTable^ dt = gcnew DataTable();
			try {
				String^ query = "SELECT * FROM vehiculo";
				dt = connector->ExecuteQuery(query);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			return dt;
		}
private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	grdDatos->DataSource = ObtenerDatos();
}






	   void grdDatos_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		   if (grdDatos->SelectedRows->Count > 0) {
			   DataGridViewRow^ selectedRow = grdDatos->SelectedRows[0];

			   // Recuperar el Id del Vehículo seleccionado
			   selectedId = Int32::Parse(selectedRow->Cells["idVehiculo"]->Value->ToString());

			   // Cargar los datos en los controles del formulario
			   txtNombre->Text = selectedRow->Cells["nombre"]->Value->ToString();
			   txtAnio->Text = selectedRow->Cells["anio"]->Value->ToString();
			   txtPais->Text = selectedRow->Cells["pais_fabricacion"]->Value->ToString();
			   txtPlaca->Text = selectedRow->Cells["placa"]->Value->ToString();
			   txtMarca->Text = selectedRow->Cells["marca"]->Value->ToString();
			   Fecha->Value = DateTime::Parse(selectedRow->Cells["fecha_de_creacion"]->Value->ToString());

			   // Habilitar modo de edición
			   isEditMode = true;
		   }
	   }

			  void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
				  if (selectedId < 0) {
					  MessageBox::Show("No se ha seleccionado un vehículo para actualizar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					  return;
				  }

				  // Recuperar datos del formulario
				  String^ nombre = txtNombre->Text;
				  String^ anio = txtAnio->Text;
				  String^ pais = txtPais->Text;
				  String^ placa = txtPlaca->Text;
				  String^ marca = txtMarca->Text;
				  String^ fecha = Fecha->Value.ToString("yyyy-MM-dd"); // Formato de fecha a AAAA-MM-DD

				  // Verificar que todos los campos están llenos
				  if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(anio) || String::IsNullOrWhiteSpace(pais) ||
					  String::IsNullOrWhiteSpace(placa) || String::IsNullOrWhiteSpace(marca)) {
					  MessageBox::Show("Por favor, complete todos los campos.", "Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					  return;
				  }

				  // Crear la consulta SQL de actualización
				  String^ query = "UPDATE vehiculo SET nombre = @nombre, anio = @anio, pais_fabricacion = @pais, placa = @placa, marca = @marca, fecha_de_creacion = @fecha WHERE idVehiculo = @id";

				  try {
					  // Establecer la conexión
					  connection->Open();

					  // Crear el comando MySqlCommand
					  MySqlCommand^ command = gcnew MySqlCommand(query, connection);

					  // Añadir los parámetros
					  command->Parameters->AddWithValue("@nombre", nombre);
					  command->Parameters->AddWithValue("@anio", anio);
					  command->Parameters->AddWithValue("@pais", pais);
					  command->Parameters->AddWithValue("@placa", placa);
					  command->Parameters->AddWithValue("@marca", marca);
					  command->Parameters->AddWithValue("@fecha", fecha);
					  command->Parameters->AddWithValue("@id", selectedId);

					  // Ejecutar la consulta
					  int rowsAffected = command->ExecuteNonQuery();

					  // Verificar el resultado
					  if (rowsAffected > 0) {
						  MessageBox::Show("Vehículo actualizado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
						  // Refrescar los datos en el DataGridView
						  grdDatos->DataSource = ObtenerDatos();
					  }
					  else {
						  MessageBox::Show("No se pudo actualizar el vehículo.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					  }
				  }
				  catch (MySqlException^ ex) {
					  // Manejar la excepción
					  MessageBox::Show("Ocurrió un error al actualizar el vehículo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				  }
				  finally {
					  // Asegurarse de cerrar la conexión
					  if (connection->State == ConnectionState::Open) {
						  connection->Close();
					  }
				  }
			  }


			  private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
				  // Verificar si hay una fila seleccionada en el DataGridView
				  if (selectedId < 0) {
					  MessageBox::Show("No se ha seleccionado un vehículo para eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					  return;
				  }

				  // Mostrar cuadro de diálogo de confirmación

				  System::Windows::Forms::DialogResult result = MessageBox::Show("¿Estás seguro de que deseas los datos de este vehiculo?", "Confirmar eliminación", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

				  // Verificar la respuesta del usuario
				  if (result == System::Windows::Forms::DialogResult::Yes) {
					  // Crear la consulta SQL de eliminación
					  String^ query = "DELETE FROM vehiculo WHERE idVehiculo = @id";

					  try {
						  // Establecer la conexión
						  connection->Open();

						  // Crear el comando MySqlCommand
						  MySqlCommand^ command = gcnew MySqlCommand(query, connection);

						  // Añadir el parámetro del Id
						  command->Parameters->AddWithValue("@id", selectedId);

						  // Ejecutar la consulta
						  int rowsAffected = command->ExecuteNonQuery();

						  // Verificar el resultado
						  if (rowsAffected > 0) {
							  MessageBox::Show("Vehículo eliminado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
							  // Refrescar los datos en el DataGridView
							  grdDatos->DataSource = ObtenerDatos();
						  }
						  else {
							  MessageBox::Show("No se pudo eliminar el vehículo.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						  }
					  }
					  catch (MySqlException^ ex) {
						  // Manejar la excepción
						  MessageBox::Show("Ocurrió un error al eliminar el vehículo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					  }
					  finally {
						  // Asegurarse de cerrar la conexión
						  if (connection->State == ConnectionState::Open) {
							  connection->Close();
						  }
					  }
				  }
			  }


};
}
