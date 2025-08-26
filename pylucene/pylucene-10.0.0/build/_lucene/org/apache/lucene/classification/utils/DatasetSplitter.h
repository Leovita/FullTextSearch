#ifndef org_apache_lucene_classification_utils_DatasetSplitter_H
#define org_apache_lucene_classification_utils_DatasetSplitter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexReader;
      }
      namespace analysis {
        class Analyzer;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace utils {

          class DatasetSplitter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fa06324555fd7858,
              mid_split_484aaba9c42f58f9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DatasetSplitter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DatasetSplitter(const DatasetSplitter& obj) : ::java::lang::Object(obj) {}

            DatasetSplitter(jdouble, jdouble);

            void split(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, jboolean, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
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
      namespace classification {
        namespace utils {
          extern PyType_Def PY_TYPE_DEF(DatasetSplitter);
          extern PyTypeObject *PY_TYPE(DatasetSplitter);

          class t_DatasetSplitter {
          public:
            PyObject_HEAD
            DatasetSplitter object;
            static PyObject *wrap_Object(const DatasetSplitter&);
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
