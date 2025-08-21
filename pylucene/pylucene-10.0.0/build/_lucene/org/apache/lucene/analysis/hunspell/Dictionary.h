#ifndef org_apache_lucene_analysis_hunspell_Dictionary_H
#define org_apache_lucene_analysis_hunspell_Dictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class SortingStrategy;
          class DictEntries;
        }
      }
      namespace store {
        class Directory;
      }
    }
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
              mid_init$_a9915dcc2fe1a28b,
              mid_init$_b3778941b5e12241,
              mid_init$_74d439ad66cd4b4a,
              mid_getIgnoreCase_947277eca0748c4e,
              mid_lookupEntries_614ff2276cf14f22,
              mid_tolerateAffixRuleCountMismatches_947277eca0748c4e,
              mid_tolerateDuplicateConversionMappings_947277eca0748c4e,
              mid_hashFactor_32caabaad86c508b,
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
