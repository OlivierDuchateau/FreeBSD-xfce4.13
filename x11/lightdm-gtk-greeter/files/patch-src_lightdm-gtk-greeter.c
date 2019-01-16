--- src/lightdm-gtk-greeter.c.orig	2018-06-29 10:49:06 UTC
+++ src/lightdm-gtk-greeter.c
@@ -1482,6 +1482,7 @@ reassign_menu_item_accel (GtkWidget *item)
     GtkAccelKey  key;
     const gchar *accel_path = gtk_menu_item_get_accel_path (GTK_MENU_ITEM (item));
 
+/*
     if (accel_path && gtk_accel_map_lookup_entry (accel_path, &key))
     {
         GClosure *closure = g_cclosure_new (G_CALLBACK (menu_item_accel_closure_cb), item, NULL);
@@ -1489,6 +1490,7 @@ reassign_menu_item_accel (GtkWidget *item)
                                  key.accel_key, key.accel_mods, key.accel_flags, closure);
         g_closure_unref (closure);
     }
+*/
 
     submenu = gtk_menu_item_get_submenu (GTK_MENU_ITEM (item));
     if (submenu)
@@ -3070,11 +3072,7 @@ main (int argc, char **argv)
             gchar *label;
             GtkWidget *radiomenuitem;
 
-            country = lightdm_language_get_territory (language);
-            if (country)
-                label = g_strdup_printf ("%s - %s", lightdm_language_get_name (language), country);
-            else
-                label = g_strdup (lightdm_language_get_name (language));
+	    label = g_strdup (lightdm_language_get_code (language));
 
             code = lightdm_language_get_code (language);
             modifier = strchr (code, '@');
