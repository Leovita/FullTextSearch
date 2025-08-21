#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum$MultiOffsetsEnum_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum$MultiOffsetsEnum_H

#include "org/apache/lucene/search/uhighlight/OffsetsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class OffsetsEnum$MultiOffsetsEnum : public ::org::apache::lucene::search::uhighlight::OffsetsEnum {
           public:
            enum {
              mid_init$_9425cd4f62c94bce,
              mid_close_3720c61b0679eb3e,
              mid_endOffset_20fbf7565993c3d7,
              mid_freq_20fbf7565993c3d7,
              mid_getTerm_9740fddd1c7df148,
              mid_nextPosition_947277eca0748c4e,
              mid_startOffset_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsEnum$MultiOffsetsEnum(jobject obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum$MultiOffsetsEnum(const OffsetsEnum$MultiOffsetsEnum& obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {}

            OffsetsEnum$MultiOffsetsEnum(const ::java::util::List &);

            void close() const;
            jint endOffset() const;
            jint freq() const;
            ::org::apache::lucene::util::BytesRef getTerm() const;
            jboolean nextPosition() const;
            jint startOffset() const;
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
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum$MultiOffsetsEnum);
          extern PyTypeObject *PY_TYPE(OffsetsEnum$MultiOffsetsEnum);

          class t_OffsetsEnum$MultiOffsetsEnum {
          public:
            PyObject_HEAD
            OffsetsEnum$MultiOffsetsEnum object;
            static PyObject *wrap_Object(const OffsetsEnum$MultiOffsetsEnum&);
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
