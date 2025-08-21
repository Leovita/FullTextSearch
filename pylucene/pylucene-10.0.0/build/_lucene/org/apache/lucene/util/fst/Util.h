#ifndef org_apache_lucene_util_fst_Util_H
#define org_apache_lucene_util_fst_Util_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace fst {
          class FST$BytesReader;
          class Util$TopResults;
          class FST$Arc;
          class FST;
        }
        class BytesRefBuilder;
        class IntsRef;
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
    class Writer;
    class IOException;
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
              mid_get_a67ca86ae62e8d9e,
              mid_get_f131f969127bb08e,
              mid_readCeilArc_9814122d10e0dc62,
              mid_shortestPaths_5b7c79d2113d5d8c,
              mid_toBytesRef_895f21eb8b7e1d8a,
              mid_toDot_2c4fc8fed09367b4,
              mid_toIntsRef_18fb74a04911a13f,
              mid_toUTF16_1c1137e1b402e49a,
              mid_toUTF32_1c1137e1b402e49a,
              mid_toUTF32_39e1646b42aff6bf,
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
