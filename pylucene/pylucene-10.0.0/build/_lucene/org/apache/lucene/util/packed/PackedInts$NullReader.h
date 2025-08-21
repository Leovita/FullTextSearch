#ifndef org_apache_lucene_util_packed_PackedInts$NullReader_H
#define org_apache_lucene_util_packed_PackedInts$NullReader_H

#include "org/apache/lucene/util/packed/PackedInts$Reader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PackedInts$NullReader;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class PackedInts$NullReader : public ::org::apache::lucene::util::packed::PackedInts$Reader {
           public:
            enum {
              mid_forCount_b91bdbd6984b51be,
              mid_get_7b22650fccb5d574,
              mid_get_be281815fcc98213,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_size_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$NullReader(jobject obj) : ::org::apache::lucene::util::packed::PackedInts$Reader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$NullReader(const PackedInts$NullReader& obj) : ::org::apache::lucene::util::packed::PackedInts$Reader(obj) {}

            static PackedInts$NullReader forCount(jint);
            jlong get(jint) const;
            jint get(jint, const JArray< jlong > &, jint, jint) const;
            jlong ramBytesUsed() const;
            jint size() const;
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(PackedInts$NullReader);
          extern PyTypeObject *PY_TYPE(PackedInts$NullReader);

          class t_PackedInts$NullReader {
          public:
            PyObject_HEAD
            PackedInts$NullReader object;
            static PyObject *wrap_Object(const PackedInts$NullReader&);
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
