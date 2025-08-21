#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class Closeable;
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
              mid_init$_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_compareTo_3363fe66ce4460eb,
              mid_endOffset_20fbf7565993c3d7,
              mid_freq_20fbf7565993c3d7,
              mid_getTerm_9740fddd1c7df148,
              mid_nextPosition_947277eca0748c4e,
              mid_startOffset_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
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
