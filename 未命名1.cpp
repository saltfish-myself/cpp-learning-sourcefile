void menu_import_clicked(Fl_Widget *widget, void *data)
{
 char *new_file = fl_file_chooser("Import file?", "*.txt", "");
 if (new_file != NULL)
 {
  std::ifstream ifs(new_file);
  if (ifs.is_open())
  {
   std::string line;
   while (ifs >> line)
    g_names.push_back(line);
   ifs.close();
  }
  g_btn->activate();
 }
}
