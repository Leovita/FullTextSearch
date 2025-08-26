#ifndef org_apache_lucene_util_bkd_PointReader_H
#define org_apache_lucene_util_bkd_PointReader_H

#include "java/io/Closeable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointValue;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class PointReader : public ::java::io::Closeable {
           public:
            enum {
              mid_next_9aa4f33e82ea333f,
              mid_pointValue_89aa7308258929e8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PointReader(jobject obj) : ::java::io::Closeable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PointReader(const PointReader& obj) : ::java::io::Closeable(obj) {}

            jboolean next() const;
            ::org::apache::lucene::util::bkd::PointValue pointValue() const;
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
      namespace util {
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(PointReader);
          extern PyTypeObject *PY_TYPE(PointReader);

          class t_PointReader {
          public:
            PyObject_HEAD
            PointReader object;
            static PyObject *wrap_Object(const PointReader&);
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
