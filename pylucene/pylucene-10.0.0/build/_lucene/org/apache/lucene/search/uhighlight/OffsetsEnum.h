#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class OffsetsEnum;
        }
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class OffsetsEnum : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_close_e7bdbe105ce1bafb,
              mid_compareTo_eeeea274b1e11825,
              mid_endOffset_bd89ce15dad49192,
              mid_freq_bd89ce15dad49192,
              mid_getTerm_adbedbc1fa61c358,
              mid_nextPosition_9aa4f33e82ea333f,
              mid_startOffset_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsEnum(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum(const OffsetsEnum& obj) : ::java::lang::Object(obj) {}

            static OffsetsEnum *EMPTY;

            OffsetsEnum();

            void close() const;
            jint compareTo(const OffsetsEnum &) const;
            jint endOffset() const;
            jint freq() const;
            ::org::apache::lucene::util::BytesRef getTerm() const;
            jboolean nextPosition() const;
            jint startOffset() const;
            ::java::lang::String toString() const;
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
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum);
          extern PyTypeObject *PY_TYPE(OffsetsEnum);

          class t_OffsetsEnum {
          public:
            PyObject_HEAD
            OffsetsEnum object;
            static PyObject *wrap_Object(const OffsetsEnum&);
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
