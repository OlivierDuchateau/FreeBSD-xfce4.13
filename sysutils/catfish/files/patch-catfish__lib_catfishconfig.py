--- catfish_lib/catfishconfig.py.orig	2019-08-11 17:51:09 UTC
+++ catfish_lib/catfishconfig.py
@@ -17,6 +17,7 @@
 #   with this program.  If not, see <https://www.gnu.org/licenses/>.
 
 import os
+import sys
 
 __all__ = [
     'project_path_not_found',
@@ -29,7 +30,10 @@ __all__ = [
 # files). By default, this is ../data, relative your trunk layout
 __catfish_data_directory__ = '../data/'
 # Location of locate.db file
-__locate_db_path__ = '/var/lib/mlocate/mlocate.db'
+if sys.platform.startswith('linux'):
+	__locate_db_path__ = '/var/lib/mlocate/mlocate.db'
+elif 'bsd' in sys.platform or sys.platform.startswith('dragonfly'):
+	__locate_db_path__ = '/var/db/locate.database'
 __license__ = 'GPL-3+'
 __version__ = '1.4.9'
 
