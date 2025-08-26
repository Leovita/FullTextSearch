#ifndef org_apache_lucene_util_fst_Util_H
#define org_apache_lucene_util_fst_Util_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
          class FST$Arc;
          class FST;
          class Util$TopResults;
        }
        class IntsRef;
        class BytesRef;
        class BytesRefBuilder;
        class IntsRefBuilder;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class IOException;
    class Writer;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Util : public ::java::lang::Object {
           public:
            enum {
              mid_get_8a3f3cc21885beaf,
              mid_get_b50e05b544627516,
              mid_readCeilArc_c42e46a7b1a5cda3,
              mid_shortestPaths_236232f12b2af2de,
              mid_toBytesRef_456655b771cc5985,
              mid_toDot_7fba8a93c9307c4d,
              mid_toIntsRef_077f8c50f573fbd9,
              mid_toUTF16_b8d8d034b744c153,
              mid_toUTF32_b8d8d034b744c153,
              mid_toUTF32_dee7d4f27dea3377,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Util(const Util& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::Object get(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::BytesRef &);
            static ::java::lang::Object get(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::IntsRef &);
            static ::org::apache::lucene::util::fst::FST$Arc readCeilArc(jint, const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &);
            static ::org::apache::lucene::util::fst::Util$TopResults shortestPaths(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, const ::java::util::Comparator &, jint, jboolean);
            static ::org::apache::lucene::util::BytesRef toBytesRef(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::BytesRefBuilder &);
            static void toDot(const ::org::apache::lucene::util::fst::FST &, const ::java::io::Writer &, jboolean, jboolean);
            static ::org::apache::lucene::util::IntsRef toIntsRef(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::IntsRefBuilder &);
            static ::org::apache::lucene::util::IntsRef toUTF16(const ::java::lang::CharSequence &, const ::org::apache::lucene::util::IntsRefBuilder &);
            static ::org::apache::lucene::util::IntsRef toUTF32(const ::java::lang::CharSequence &, const ::org::apache::lucene::util::IntsRefBuilder &);
            static ::org::apache::lucene::util::IntsRef toUTF32(const JArray< jchar > &, jint, jint, const ::org::apache::lucene::util::IntsRefBuilder &);
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
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(Util);
          extern PyTypeObject *PY_TYPE(Util);

          class t_Util {
          public:
            PyObject_HEAD
            Util object;
            static PyObject *wrap_Object(const Util&);
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
