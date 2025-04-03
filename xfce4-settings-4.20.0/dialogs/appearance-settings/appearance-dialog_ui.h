/* automatically generated from appearance-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (appearance_dialog_ui)
#endif
#ifdef __GNUC__
static const char appearance_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char appearance_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.20\"/><requires lib=\"libxfce4ui-2\" version=\"4.13\"/"
  "><object class=\"GtkFileFilter\" id=\"filefilter1\"><patterns><pattern>"
  "*.tar</pattern><pattern>*.zip</pattern></patterns></object><object clas"
  "s=\"GtkImage\" id=\"image1\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">False</property><property name=\"icon_name"
  "\">window-close-symbolic</property></object><object class=\"GtkImage\" "
  "id=\"image2\"><property name=\"visible\">True</property><property name="
  "\"can_focus\">False</property><property name=\"icon_name\">help-browser"
  "</property></object><object class=\"GtkImage\" id=\"image3\"><property "
  "name=\"visible\">True</property><property name=\"can_focus\">False</pro"
  "perty><property name=\"icon_name\">list-add-symbolic</property></object"
  "><object class=\"GtkImage\" id=\"image4\"><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"icon_name\">list-add-symbolic</property></object><object class=\"Gt"
  "kListStore\" id=\"liststore1\"><columns><column type=\"gchararray\"/></"
  "columns><data><row><col id=\"0\" translatable=\"yes\">None</col></row><"
  "row><col id=\"0\" translatable=\"yes\">Slight</col></row><row><col id=\""
  "0\" translatable=\"yes\">Medium</col></row><row><col id=\"0\" translata"
  "ble=\"yes\">Full</col></row></data></object><object class=\"GtkListStor"
  "e\" id=\"liststore2\"><columns><column type=\"gchararray\"/></columns><"
  "data><row><col id=\"0\" translatable=\"yes\">Icons</col></row><row><col"
  " id=\"0\" translatable=\"yes\">Text</col></row><row><col id=\"0\" trans"
  "latable=\"yes\">Text under icons</col></row><row><col id=\"0\" translat"
  "able=\"yes\">Text next to icons</col></row></data></object><object clas"
  "s=\"GtkListStore\" id=\"liststore3\"><columns><column type=\"gint\"/><c"
  "olumn type=\"gchararray\"/></columns><data><row><col id=\"0\">1</col><c"
  "ol id=\"1\" translatable=\"yes\">1x (no scaling)</col></row><row><col i"
  "d=\"0\">2</col><col id=\"1\" translatable=\"yes\">2x</col></row></data>"
  "</object><object class=\"GtkAdjustment\" id=\"xft_custom_dpi\"><propert"
  "y name=\"lower\">48</property><property name=\"upper\">1000</property><"
  "property name=\"value\">96</property><property name=\"step_increment\">"
  "1</property><property name=\"page_increment\">10</property></object><ob"
  "ject class=\"GtkListStore\" id=\"xft_rgba_store\"><columns><column type"
  "=\"CairoSurface\"/><column type=\"gchararray\"/></columns></object><obj"
  "ect class=\"XfceTitledDialog\" id=\"dialog\"><property name=\"can_focus"
  "\">False</property><property name=\"title\" translatable=\"yes\">Appear"
  "ance</property><property name=\"window_position\">center-on-parent</pro"
  "perty><property name=\"default_width\">400</property><property name=\"d"
  "efault_height\">540</property><property name=\"icon_name\">org.xfce.set"
  "tings.appearance</property><property name=\"type_hint\">dialog</propert"
  "y><child internal-child=\"vbox\"><object class=\"GtkBox\" id=\"dialog-v"
  "box1\"><property name=\"visible\">True</property><property name=\"can_f"
  "ocus\">False</property><property name=\"orientation\">vertical</propert"
  "y><property name=\"spacing\">2</property><child internal-child=\"action"
  "_area\"><object class=\"GtkButtonBox\" id=\"dialog-action_area1\"><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">False"
  "</property><property name=\"layout_style\">end</property><child><object"
  " class=\"GtkButton\" id=\"button2\"><property name=\"label\" translatab"
  "le=\"yes\">_Help</property><property name=\"visible\">True</property><p"
  "roperty name=\"can_focus\">True</property><property name=\"receives_def"
  "ault\">True</property><property name=\"image\">image2</property><proper"
  "ty name=\"use_underline\">True</property></object><packing><property na"
  "me=\"expand\">False</property><property name=\"fill\">False</property><"
  "property name=\"position\">0</property><property name=\"secondary\">Tru"
  "e</property></packing></child><child><object class=\"GtkButton\" id=\"b"
  "utton1\"><property name=\"label\" translatable=\"yes\">_Close</property"
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">True</property><property name=\"receives_default\">True</property><pro"
  "perty name=\"image\">image1</property><property name=\"use_underline\">"
  "True</property></object><packing><property name=\"expand\">False</prope"
  "rty><property name=\"fill\">False</property><property name=\"position\""
  ">0</property></packing></child></object><packing><property name=\"expan"
  "d\">False</property><property name=\"fill\">True</property><property na"
  "me=\"pack_type\">end</property><property name=\"position\">0</property>"
  "</packing></child><child><object class=\"GtkNotebook\" id=\"plug-child\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">True</property><property name=\"border_width\">6</property><child><obj"
  "ect class=\"GtkBox\"><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">False</property><property name=\"border_width\">12"
  "</property><property name=\"orientation\">vertical</property><child><ob"
  "ject class=\"GtkScrolledWindow\" id=\"scrolledwindow2\"><property name="
  "\"visible\">True</property><property name=\"can_focus\">True</property>"
  "<property name=\"vexpand\">True</property><property name=\"shadow_type\""
  ">etched-in</property><child><object class=\"GtkTreeView\" id=\"gtk_them"
  "e_treeview\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">True</property><property name=\"headers_visible\">False</pr"
  "operty><property name=\"show_expanders\">False</property><child interna"
  "l-child=\"selection\"><object class=\"GtkTreeSelection\" id=\"treeview-"
  "selection1\"/></child></object></child></object><packing><property name"
  "=\"expand\">False</property><property name=\"fill\">True</property><pro"
  "perty name=\"position\">0</property></packing></child><child><object cl"
  "ass=\"GtkBox\"><property name=\"visible\">True</property><property name"
  "=\"can_focus\">False</property><property name=\"orientation\">vertical<"
  "/property><child><object class=\"GtkButton\" id=\"install_gtk_theme\"><"
  "property name=\"label\" translatable=\"yes\">_Add</property><property n"
  "ame=\"visible\">True</property><property name=\"can_focus\">True</prope"
  "rty><property name=\"receives_default\">True</property><property name=\""
  "halign\">start</property><property name=\"image\">image3</property><pro"
  "perty name=\"use_underline\">True</property></object><packing><property"
  " name=\"expand\">False</property><property name=\"fill\">True</property"
  "><property name=\"position\">0</property></packing></child><style><clas"
  "s name=\"inline-toolbar\"/></style></object><packing><property name=\"e"
  "xpand\">False</property><property name=\"fill\">True</property><propert"
  "y name=\"position\">1</property></packing></child><child><object class="
  "\"GtkBox\" id=\"xfwm4_sync\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">False</property><property name=\"margin_to"
  "p\">12</property><child><object class=\"GtkLabel\" id=\"xfwm4_sync_labe"
  "l\"><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">False</property><property name=\"label\" translatable=\"yes\">Set m"
  "atching &lt;a href=\"xfwm4-settings:\"&gt;Xfwm4 theme&lt;/a&gt; if ther"
  "e is one</property><property name=\"use_markup\">True</property><proper"
  "ty name=\"xalign\">0</property></object><packing><property name=\"expan"
  "d\">True</property><property name=\"fill\">True</property><property nam"
  "e=\"position\">0</property></packing></child><child><object class=\"Gtk"
  "Switch\" id=\"xfwm4_sync_switch\"><property name=\"visible\">True</prop"
  "erty><property name=\"can_focus\">True</property></object><packing><pro"
  "perty name=\"expand\">False</property><property name=\"fill\">True</pro"
  "perty><property name=\"position\">1</property></packing></child></objec"
  "t><packing><property name=\"expand\">False</property><property name=\"f"
  "ill\">True</property><property name=\"position\">2</property></packing>"
  "</child></object></child><child type=\"tab\"><object class=\"GtkLabel\""
  " id=\"label1\"><property name=\"visible\">True</property><property name"
  "=\"can_focus\">False</property><property name=\"label\" translatable=\""
  "yes\">St_yle</property><property name=\"use_underline\">True</property>"
  "</object><packing><property name=\"tab_fill\">False</property></packing"
  "></child><child><object class=\"GtkBox\"><property name=\"visible\">Tru"
  "e</property><property name=\"can_focus\">False</property><property name"
  "=\"border_width\">12</property><property name=\"orientation\">vertical<"
  "/property><child><object class=\"GtkScrolledWindow\" id=\"scrolledwindo"
  "w1\"><property name=\"visible\">True</property><property name=\"can_foc"
  "us\">True</property><property name=\"shadow_type\">etched-in</property>"
  "<child><object class=\"GtkTreeView\" id=\"icon_theme_treeview\"><proper"
  "ty name=\"visible\">True</property><property name=\"can_focus\">True</p"
  "roperty><property name=\"headers_visible\">False</property><property na"
  "me=\"show_expanders\">False</property><child internal-child=\"selection"
  "\"><object class=\"GtkTreeSelection\" id=\"treeview-selection2\"/></chi"
  "ld></object></child></object><packing><property name=\"expand\">True</p"
  "roperty><property name=\"fill\">True</property><property name=\"positio"
  "n\">0</property></packing></child><child><object class=\"GtkBox\"><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">False"
  "</property><property name=\"orientation\">vertical</property><child><ob"
  "ject class=\"GtkButton\" id=\"install_icon_theme\"><property name=\"lab"
  "el\" translatable=\"yes\">_Add</property><property name=\"visible\">Tru"
  "e</property><property name=\"can_focus\">True</property><property name="
  "\"receives_default\">True</property><property name=\"halign\">start</pr"
  "operty><property name=\"image\">image4</property><property name=\"use_u"
  "nderline\">True</property></object><packing><property name=\"expand\">F"
  "alse</property><property name=\"fill\">True</property><property name=\""
  "position\">0</property></packing></child><style><class name=\"inline-to"
  "olbar\"/></style></object><packing><property name=\"expand\">False</pro"
  "perty><property name=\"fill\">True</property><property name=\"position\""
  ">1</property></packing></child></object><packing><property name=\"posit"
  "ion\">1</property></packing></child><child type=\"tab\"><object class=\""
  "GtkLabel\" id=\"label2\"><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">False</property><property name=\"label\" trans"
  "latable=\"yes\">_Icons</property><property name=\"use_underline\">True<"
  "/property></object><packing><property name=\"position\">1</property><pr"
  "operty name=\"tab_fill\">False</property></packing></child><child><obje"
  "ct class=\"GtkScrolledWindow\"><property name=\"visible\">True</propert"
  "y><property name=\"can_focus\">True</property><child><object class=\"Gt"
  "kViewport\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><child><object class=\"GtkBox\" id=\"vbox3\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">False</property><property name=\"border_width\">12</property><property"
  " name=\"orientation\">vertical</property><property name=\"spacing\">18<"
  "/property><child><object class=\"GtkFrame\" id=\"frame3\"><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">False</proper"
  "ty><property name=\"label_xalign\">0</property><property name=\"shadow_"
  "type\">none</property><child><object class=\"GtkAlignment\" id=\"alignm"
  "ent3\"><property name=\"visible\">True</property><property name=\"can_f"
  "ocus\">False</property><property name=\"top_padding\">6</property><prop"
  "erty name=\"left_padding\">12</property><child><object class=\"GtkFontB"
  "utton\" id=\"gtk_fontname_button\"><property name=\"visible\">True</pro"
  "perty><property name=\"can_focus\">True</property><property name=\"rece"
  "ives_default\">True</property><property name=\"tooltip_text\" translata"
  "ble=\"yes\">This font will be used as the default font used when drawin"
  "g user interface text</property><property name=\"font\">Sans 12</proper"
  "ty><property name=\"title\" translatable=\"yes\">Select a default font<"
  "/property></object></child></object></child><child type=\"label\"><obje"
  "ct class=\"GtkLabel\" id=\"label7\"><property name=\"visible\">True</pr"
  "operty><property name=\"can_focus\">False</property><property name=\"la"
  "bel\" translatable=\"yes\">Default Fon_t</property><property name=\"use"
  "_underline\">True</property><property name=\"mnemonic_widget\">gtk_font"
  "name_button</property><attributes><attribute name=\"weight\" value=\"bo"
  "ld\"/></attributes></object></child></object><packing><property name=\""
  "expand\">False</property><property name=\"fill\">True</property><proper"
  "ty name=\"position\">0</property></packing></child><child><object class"
  "=\"GtkFrame\" id=\"frame7\"><property name=\"visible\">True</property><"
  "property name=\"can_focus\">False</property><property name=\"label_xali"
  "gn\">0</property><property name=\"shadow_type\">none</property><child><"
  "object class=\"GtkAlignment\" id=\"alignment7\"><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">False</property><proper"
  "ty name=\"top_padding\">6</property><property name=\"left_padding\">12<"
  "/property><child><object class=\"GtkFontButton\" id=\"gtk_monospace_fon"
  "tname_button\"><property name=\"visible\">True</property><property name"
  "=\"can_focus\">True</property><property name=\"receives_default\">True<"
  "/property><property name=\"tooltip_text\" translatable=\"yes\">This fon"
  "t will be used as the default monospace font, for example by terminal e"
  "mulators.</property><property name=\"font\">Sans 12</property><property"
  " name=\"title\" translatable=\"yes\">Select a default monospace font</p"
  "roperty></object></child></object></child><child type=\"label\"><object"
  " class=\"GtkLabel\" id=\"label14\"><property name=\"visible\">True</pro"
  "perty><property name=\"can_focus\">False</property><property name=\"lab"
  "el\" translatable=\"yes\">Default _Monospace Font</property><property n"
  "ame=\"use_underline\">True</property><property name=\"mnemonic_widget\""
  ">gtk_monospace_fontname_button</property><attributes><attribute name=\""
  "weight\" value=\"bold\"/></attributes></object></child></object><packin"
  "g><property name=\"expand\">False</property><property name=\"fill\">Tru"
  "e</property><property name=\"position\">1</property></packing></child><"
  "child><object class=\"GtkFrame\" id=\"frame4\"><property name=\"visible"
  "\">True</property><property name=\"can_focus\">False</property><propert"
  "y name=\"label_xalign\">0</property><property name=\"shadow_type\">none"
  "</property><child><object class=\"GtkAlignment\"><property name=\"visib"
  "le\">True</property><property name=\"can_focus\">False</property><prope"
  "rty name=\"top_padding\">6</property><property name=\"left_padding\">12"
  "</property><child><object class=\"GtkBox\"><property name=\"visible\">T"
  "rue</property><property name=\"can_focus\">False</property><property na"
  "me=\"orientation\">vertical</property><property name=\"spacing\">6</pro"
  "perty><child><object class=\"GtkCheckButton\" id=\"xft_antialias_check_"
  "button\"><property name=\"label\" translatable=\"yes\">_Enable anti-ali"
  "asing</property><property name=\"visible\">True</property><property nam"
  "e=\"can_focus\">True</property><property name=\"receives_default\">Fals"
  "e</property><property name=\"tooltip_text\" translatable=\"yes\">Anti-a"
  "liasing, or font smoothing, can improve the look of text on the screen<"
  "/property><property name=\"halign\">start</property><property name=\"us"
  "e_underline\">True</property><property name=\"active\">True</property><"
  "property name=\"draw_indicator\">True</property></object><packing><prop"
  "erty name=\"expand\">False</property><property name=\"fill\">True</prop"
  "erty><property name=\"position\">0</property></packing></child><child><"
  "object class=\"GtkAlignment\"><property name=\"visible\">True</property"
  "><property name=\"can_focus\">False</property><property name=\"left_pad"
  "ding\">12</property><child><object class=\"GtkGrid\" id=\"grid1\"><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">False"
  "</property><property name=\"row_spacing\">6</property><property name=\""
  "column_spacing\">12</property><child><object class=\"GtkLabel\" id=\"la"
  "bel10\"><property name=\"visible\">True</property><property name=\"can_"
  "focus\">False</property><property name=\"halign\">start</property><prop"
  "erty name=\"label\" translatable=\"yes\">Hintin_g:</property><property "
  "name=\"use_underline\">True</property></object><packing><property name="
  "\"left_attach\">0</property><property name=\"top_attach\">0</property><"
  "/packing></child><child><object class=\"GtkComboBox\" id=\"xft_hinting_"
  "style_combo_box\"><property name=\"visible\">True</property><property n"
  "ame=\"can_focus\">False</property><property name=\"tooltip_text\" trans"
  "latable=\"yes\">Many fonts contain information that provides extra hint"
  "s as to how best draw the font; pick whichever looks best according to "
  "personal preference</property><property name=\"hexpand\">True</property"
  "><property name=\"model\">liststore1</property><child><object class=\"G"
  "tkCellRendererText\" id=\"cellrenderertext1\"/><attributes><attribute n"
  "ame=\"text\">0</attribute></attributes></child></object><packing><prope"
  "rty name=\"left_attach\">1</property><property name=\"top_attach\">0</p"
  "roperty></packing></child><child><object class=\"GtkLabel\" id=\"label1"
  "1\"><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">False</property><property name=\"halign\">start</property><property"
  " name=\"label\" translatable=\"yes\">Sub-_pixel order:</property><prope"
  "rty name=\"use_underline\">True</property></object><packing><property n"
  "ame=\"left_attach\">0</property><property name=\"top_attach\">1</proper"
  "ty></packing></child><child><object class=\"GtkComboBox\" id=\"xft_rgba"
  "_combo_box\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"tooltip_text\" translatabl"
  "e=\"yes\">Font quality on a TFT or LCD screen can be greatly improved b"
  "y choosing the correct sub-pixel order of the screen</property><propert"
  "y name=\"hexpand\">True</property><property name=\"model\">xft_rgba_sto"
  "re</property><child><object class=\"GtkCellRendererText\" id=\"cellrend"
  "erertext3\"/><attributes><attribute name=\"text\">1</attribute></attrib"
  "utes></child><child><object class=\"GtkCellRendererPixbuf\" id=\"cellre"
  "ndererpixbuf1\"/><attributes><attribute name=\"surface\">0</attribute><"
  "/attributes></child></object><packing><property name=\"left_attach\">1<"
  "/property><property name=\"top_attach\">1</property></packing></child><"
  "/object></child></object><packing><property name=\"expand\">False</prop"
  "erty><property name=\"fill\">True</property><property name=\"position\""
  ">1</property></packing></child></object></child></object></child><child"
  " type=\"label\"><object class=\"GtkLabel\" id=\"label8\"><property name"
  "=\"visible\">True</property><property name=\"can_focus\">False</propert"
  "y><property name=\"label\" translatable=\"yes\">Rendering</property><at"
  "tributes><attribute name=\"weight\" value=\"bold\"/></attributes></obje"
  "ct></child></object><packing><property name=\"expand\">False</property>"
  "<property name=\"fill\">True</property><property name=\"position\">2</p"
  "roperty></packing></child><child><object class=\"GtkFrame\" id=\"frame5"
  "\"><property name=\"visible\">True</property><property name=\"can_focus"
  "\">False</property><property name=\"label_xalign\">0</property><propert"
  "y name=\"shadow_type\">none</property><child><object class=\"GtkAlignme"
  "nt\" id=\"alignment5\"><property name=\"visible\">True</property><prope"
  "rty name=\"can_focus\">False</property><property name=\"top_padding\">6"
  "</property><property name=\"left_padding\">12</property><child><object "
  "class=\"GtkBox\" id=\"hbox1\"><property name=\"visible\">True</property"
  "><property name=\"can_focus\">False</property><property name=\"spacing\""
  ">12</property><child><object class=\"GtkCheckButton\" id=\"xft_custom_d"
  "pi_check_button\"><property name=\"label\" translatable=\"yes\">Custom "
  "_DPI setting:</property><property name=\"visible\">True</property><prop"
  "erty name=\"can_focus\">True</property><property name=\"receives_defaul"
  "t\">False</property><property name=\"tooltip_text\" translatable=\"yes\""
  ">Override the detected monitor resolution if fonts look too large or to"
  "o small</property><property name=\"use_underline\">True</property><prop"
  "erty name=\"draw_indicator\">True</property></object><packing><property"
  " name=\"expand\">False</property><property name=\"fill\">True</property"
  "><property name=\"position\">0</property></packing></child><child><obje"
  "ct class=\"GtkSpinButton\" id=\"xft_custom_dpi_spin_button\"><property "
  "name=\"visible\">True</property><property name=\"sensitive\">False</pro"
  "perty><property name=\"can_focus\">True</property><property name=\"widt"
  "h_chars\">6</property><property name=\"primary_icon_activatable\">False"
  "</property><property name=\"secondary_icon_activatable\">False</propert"
  "y><property name=\"adjustment\">xft_custom_dpi</property><property name"
  "=\"snap_to_ticks\">True</property><property name=\"numeric\">True</prop"
  "erty><property name=\"update_policy\">if-valid</property></object><pack"
  "ing><property name=\"expand\">False</property><property name=\"fill\">T"
  "rue</property><property name=\"position\">1</property></packing></child"
  "></object></child></object></child><child type=\"label\"><object class="
  "\"GtkLabel\" id=\"label9\"><property name=\"visible\">True</property><p"
  "roperty name=\"can_focus\">False</property><property name=\"label\" tra"
  "nslatable=\"yes\">DPI</property><attributes><attribute name=\"weight\" "
  "value=\"bold\"/></attributes></object></child></object><packing><proper"
  "ty name=\"expand\">False</property><property name=\"fill\">True</proper"
  "ty><property name=\"position\">3</property></packing></child></object><"
  "/child></object></child></object><packing><property name=\"position\">2"
  "</property></packing></child><child type=\"tab\"><object class=\"GtkLab"
  "el\" id=\"label3\"><property name=\"visible\">True</property><property "
  "name=\"can_focus\">False</property><property name=\"label\" translatabl"
  "e=\"yes\">_Fonts</property><property name=\"use_underline\">True</prope"
  "rty></object><packing><property name=\"position\">2</property><property"
  " name=\"tab_fill\">False</property></packing></child><child><object cla"
  "ss=\"GtkScrolledWindow\"><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">True</property><child><object class=\"GtkViewp"
  "ort\"><property name=\"visible\">True</property><property name=\"can_fo"
  "cus\">False</property><child><object class=\"GtkBox\" id=\"vbox1\"><pro"
  "perty name=\"visible\">True</property><property name=\"can_focus\">Fals"
  "e</property><property name=\"border_width\">12</property><property name"
  "=\"orientation\">vertical</property><property name=\"spacing\">18</prop"
  "erty><child><object class=\"GtkFrame\" id=\"frame1\"><property name=\"v"
  "isible\">True</property><property name=\"can_focus\">False</property><p"
  "roperty name=\"label_xalign\">0</property><property name=\"shadow_type\""
  ">none</property><child><object class=\"GtkAlignment\" id=\"alignment1\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">False</property><property name=\"top_padding\">6</property><property n"
  "ame=\"left_padding\">12</property><child><object class=\"GtkBox\" id=\""
  "vbox2\"><property name=\"visible\">True</property><property name=\"can_"
  "focus\">False</property><property name=\"orientation\">vertical</proper"
  "ty><property name=\"spacing\">6</property><child><object class=\"GtkChe"
  "ckButton\" id=\"gtk_button_images_check_button\"><property name=\"label"
  "\" translatable=\"yes\">Show images on _buttons</property><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">True</propert"
  "y><property name=\"receives_default\">False</property><property name=\""
  "tooltip_text\" translatable=\"yes\">Specify whether icons should be dis"
  "played next to text in buttons</property><property name=\"halign\">star"
  "t</property><property name=\"use_underline\">True</property><property n"
  "ame=\"draw_indicator\">True</property></object><packing><property name="
  "\"expand\">True</property><property name=\"fill\">True</property><prope"
  "rty name=\"position\">0</property></packing></child><child><object clas"
  "s=\"GtkCheckButton\" id=\"gtk_menu_images_check_button\"><property name"
  "=\"label\" translatable=\"yes\">Show images in _menus</property><proper"
  "ty name=\"visible\">True</property><property name=\"can_focus\">True</p"
  "roperty><property name=\"receives_default\">False</property><property n"
  "ame=\"tooltip_text\" translatable=\"yes\">Specify whether icons should "
  "be displayed next to items in menus</property><property name=\"halign\""
  ">start</property><property name=\"use_underline\">True</property><prope"
  "rty name=\"draw_indicator\">True</property></object><packing><property "
  "name=\"expand\">True</property><property name=\"fill\">True</property><"
  "property name=\"position\">1</property></packing></child><child><object"
  " class=\"GtkCheckButton\" id=\"gtk_caneditaccels_check_button\"><proper"
  "ty name=\"label\" translatable=\"yes\">Enable e_ditable accelerators</p"
  "roperty><property name=\"visible\">True</property><property name=\"can_"
  "focus\">True</property><property name=\"receives_default\">False</prope"
  "rty><property name=\"tooltip_text\" translatable=\"yes\">If selected, k"
  "eyboard shortcuts for menu items can be changed by hovering the mouse o"
  "ver the menu item and pressing the new key combination for the shortcut"
  "</property><property name=\"halign\">start</property><property name=\"u"
  "se_underline\">True</property><property name=\"draw_indicator\">True</p"
  "roperty></object><packing><property name=\"expand\">True</property><pro"
  "perty name=\"fill\">True</property><property name=\"position\">2</prope"
  "rty></packing></child><child><object class=\"GtkCheckButton\" id=\"gtk_"
  "dialog_button_header_check_button\"><property name=\"label\" translatab"
  "le=\"yes\">Enable header bars in dialo_gs</property><property name=\"vi"
  "sible\">True</property><property name=\"can_focus\">True</property><pro"
  "perty name=\"receives_default\">False</property><property name=\"toolti"
  "p_text\" translatable=\"yes\">Defines whether GTK dialogs may place wid"
  "gets such as buttons in the dialog\'s header bar. Implies in Client Sid"
  "e Decoration. Only affects newly opened dialogs.</property><property na"
  "me=\"halign\">start</property><property name=\"use_underline\">True</pr"
  "operty><property name=\"draw_indicator\">True</property></object><packi"
  "ng><property name=\"expand\">True</property><property name=\"fill\">Tru"
  "e</property><property name=\"position\">3</property></packing></child><"
  "/object></child></object></child><child type=\"label\"><object class=\""
  "GtkLabel\" id=\"label5\"><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">False</property><property name=\"label\" trans"
  "latable=\"yes\">Menus and Buttons</property><attributes><attribute name"
  "=\"weight\" value=\"bold\"/></attributes></object></child></object><pac"
  "king><property name=\"expand\">False</property><property name=\"fill\">"
  "True</property><property name=\"position\">1</property></packing></chil"
  "d><child><object class=\"GtkFrame\" id=\"event_sounds_frame\"><property"
  " name=\"can_focus\">False</property><property name=\"label_xalign\">0</"
  "property><property name=\"shadow_type\">none</property><child><object c"
  "lass=\"GtkAlignment\" id=\"alignment6\"><property name=\"visible\">True"
  "</property><property name=\"can_focus\">False</property><property name="
  "\"top_padding\">6</property><property name=\"left_padding\">12</propert"
  "y><child><object class=\"GtkBox\" id=\"vbox4\"><property name=\"visible"
  "\">True</property><property name=\"can_focus\">False</property><propert"
  "y name=\"orientation\">vertical</property><property name=\"spacing\">6<"
  "/property><child><object class=\"GtkCheckButton\" id=\"enable_event_sou"
  "nds_check_button\"><property name=\"label\" translatable=\"yes\">Enable"
  " _event sounds</property><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">True</property><property name=\"receives_defau"
  "lt\">False</property><property name=\"tooltip_text\" translatable=\"yes"
  "\">Enable or disable event sounds globally (requires \"Canberra\" suppo"
  "rt)</property><property name=\"halign\">start</property><property name="
  "\"use_underline\">True</property><property name=\"draw_indicator\">True"
  "</property></object><packing><property name=\"expand\">False</property>"
  "<property name=\"fill\">True</property><property name=\"position\">0</p"
  "roperty></packing></child><child><object class=\"GtkCheckButton\" id=\""
  "enable_input_feedback_sounds_button\"><property name=\"label\" translat"
  "able=\"yes\">Enable input feedbac_k sounds</property><property name=\"v"
  "isible\">True</property><property name=\"can_focus\">True</property><pr"
  "operty name=\"receives_default\">False</property><property name=\"toolt"
  "ip_text\" translatable=\"yes\">Specify whether mouse clicks and other u"
  "ser input will cause event sounds to play</property><property name=\"ha"
  "lign\">start</property><property name=\"use_underline\">True</property>"
  "<property name=\"draw_indicator\">True</property></object><packing><pro"
  "perty name=\"expand\">False</property><property name=\"fill\">True</pro"
  "perty><property name=\"position\">3</property></packing></child></objec"
  "t></child></object></child><child type=\"label\"><object class=\"GtkLab"
  "el\" id=\"label4\"><property name=\"visible\">True</property><property "
  "name=\"can_focus\">False</property><property name=\"label\" translatabl"
  "e=\"yes\">Event sounds</property><attributes><attribute name=\"weight\""
  " value=\"bold\"/></attributes></object></child></object><packing><prope"
  "rty name=\"expand\">False</property><property name=\"fill\">True</prope"
  "rty><property name=\"position\">2</property></packing></child><child><o"
  "bject class=\"GtkFrame\" id=\"frame6\"><property name=\"visible\">True<"
  "/property><property name=\"can_focus\">False</property><property name=\""
  "label_xalign\">0</property><property name=\"shadow_type\">none</propert"
  "y><child><object class=\"GtkAlignment\" id=\"alignment4\"><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">False</proper"
  "ty><property name=\"top_padding\">6</property><property name=\"left_pad"
  "ding\">12</property><child><object class=\"GtkComboBox\" id=\"gdk_windo"
  "w_scaling_factor_combo_box\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">False</property><property name=\"tooltip_t"
  "ext\" translatable=\"yes\">Adjust the system-wide display scaling</prop"
  "erty><property name=\"model\">liststore3</property><property name=\"act"
  "ive\">0</property><property name=\"id_column\">0</property><child><obje"
  "ct class=\"GtkCellRendererText\" id=\"cellrenderertext4\"/><attributes>"
  "<attribute name=\"text\">1</attribute></attributes></child></object></c"
  "hild></object></child><child type=\"label\"><object class=\"GtkLabel\" "
  "id=\"label13\"><property name=\"visible\">True</property><property name"
  "=\"can_focus\">False</property><property name=\"label\" translatable=\""
  "yes\">_Window Scaling</property><property name=\"use_underline\">True</"
  "property><property name=\"mnemonic_widget\">gdk_window_scaling_factor_c"
  "ombo_box</property><attributes><attribute name=\"weight\" value=\"bold\""
  "/></attributes></object></child></object><packing><property name=\"expa"
  "nd\">False</property><property name=\"fill\">True</property><property n"
  "ame=\"position\">3</property></packing></child></object></child></objec"
  "t></child></object><packing><property name=\"position\">3</property></p"
  "acking></child><child type=\"tab\"><object class=\"GtkLabel\" id=\"labe"
  "l12\"><property name=\"visible\">True</property><property name=\"can_fo"
  "cus\">False</property><property name=\"label\" translatable=\"yes\">Set"
  "ti_ngs</property><property name=\"use_underline\">True</property></obje"
  "ct><packing><property name=\"position\">3</property><property name=\"ta"
  "b_fill\">False</property></packing></child></object><packing><property "
  "name=\"expand\">True</property><property name=\"fill\">True</property><"
  "property name=\"position\">1</property></packing></child></object></chi"
  "ld><action-widgets><action-widget response=\"-11\">button2</action-widg"
  "et><action-widget response=\"0\">button1</action-widget></action-widget"
  "s></object></interface>"
};

static const unsigned appearance_dialog_ui_length = 30437u;

