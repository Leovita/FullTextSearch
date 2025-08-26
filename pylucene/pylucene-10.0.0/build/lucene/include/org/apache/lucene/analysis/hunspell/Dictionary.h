#ifndef org_apache_lucene_analysis_hunspell_Dictionary_H
#define org_apache_lucene_analysis_hunspell_Dictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace analysis {
        namespace hunspell {
          class SortingStrategy;
          class DictEntries;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class Dictionary : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c90886ef46d1d74a,
              mid_init$_674c2939cf88bc07,
              mid_init$_93cad9060a8c4106,
              mid_getIgnoreCase_9aa4f33e82ea333f,
              mid_lookupEntries_ebcc83aa84cb38b9,
              mid_tolerateAffixRuleCountMismatches_9aa4f33e82ea333f,
              mid_tolerateDuplicateConversionMappings_9aa4f33e82ea333f,
              mid_hashFactor_6fb37e123fed7a1f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Dictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Dictionary(const Dictionary& obj) : ::java::lang::Object(obj) {}

            Dictionary(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::io::InputStream &, const ::java::io::InputStream &);
            Dictionary(const ::java::io::InputStream &, const ::java::util::List &, jboolean, const ::org::apache::lucene::analysis::hunspell::SortingStrategy &);
            Dictionary(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::io::InputStream &, const ::java::util::List &, jboolean);

            jboolean getIgnoreCase() const;
            ::org::apache::lucene::analysis::hunspell::DictEntries lookupEntries(const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(Dictionary);
          extern PyTypeObject *PY_TYPE(Dictionary);

          class t_Dictionary {
          public:
            PyObject_HEAD
            Dictionary object;
            static PyObject *wrap_Object(const Dictionary&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
