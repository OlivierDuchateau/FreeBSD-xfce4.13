--- thunar/thunar-file.c.orig	2018-09-26 16:40:34 UTC
+++ thunar/thunar-file.c
@@ -4144,11 +4144,11 @@ thunar_file_compare_by_name (const ThunarFile *file_a,
 
   /* case insensitive checking */
   if (G_LIKELY (!case_sensitive))
-    result = strcmp (file_a->collate_key_nocase, file_b->collate_key_nocase);
+    result = g_strcmp0 (file_a->collate_key_nocase, file_b->collate_key_nocase);
 
   /* fall-back to case sensitive */
   if (result == 0)
-    result = strcmp (file_a->collate_key, file_b->collate_key);
+    result = g_strcmp0 (file_a->collate_key, file_b->collate_key);
 
   /* this happens in the trash */
   if (result == 0)
