#ifndef org_apache_lucene_util_automaton_Operations_H
#define org_apache_lucene_util_automaton_Operations_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
        class IntsRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
    class List;
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class Operations : public ::java::lang::Object {
           public:
            enum {
              mid_complement_8281093bfab3d3ff,
              mid_concatenate_07ded7ea7635a733,
              mid_concatenate_7cd2378fe609716c,
              mid_determinize_8281093bfab3d3ff,
              mid_getCommonPrefix_d64d54728c0ae7ca,
              mid_getCommonPrefixBytesRef_1af06c6b5bab3c41,
              mid_getCommonSuffixBytesRef_1af06c6b5bab3c41,
              mid_getSingleton_420e302665ed7696,
              mid_hasDeadStates_2edba86d518e2f04,
              mid_hasDeadStatesFromInitial_2edba86d518e2f04,
              mid_hasDeadStatesToAccept_2edba86d518e2f04,
              mid_intersection_7cd2378fe609716c,
              mid_isEmpty_2edba86d518e2f04,
              mid_isTotal_2edba86d518e2f04,
              mid_isTotal_52a5af817494b220,
              mid_minus_2fe1be51e0f28e4d,
              mid_optional_c6f90dfe8bea6705,
              mid_removeDeadStates_c6f90dfe8bea6705,
              mid_repeat_c6f90dfe8bea6705,
              mid_repeat_8281093bfab3d3ff,
              mid_repeat_3499b28139aae66f,
              mid_reverse_c6f90dfe8bea6705,
              mid_reverse_68ac51471379844b,
              mid_run_c32fb2d45be26c83,
              mid_run_7e8edf8b8902b59c,
              mid_topoSortStates_016b0a30515b6b22,
              mid_union_8141f08eb89c1d9b,
              mid_union_7cd2378fe609716c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Operations(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Operations(const Operations& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_DETERMINIZE_WORK_LIMIT;

            static ::org::apache::lucene::util::automaton::Automaton complement(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::automaton::Automaton concatenate(const ::java::util::List &);
            static ::org::apache::lucene::util::automaton::Automaton concatenate(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton determinize(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::java::lang::String getCommonPrefix(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::BytesRef getCommonPrefixBytesRef(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::BytesRef getCommonSuffixBytesRef(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::IntsRef getSingleton(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean hasDeadStates(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean hasDeadStatesFromInitial(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean hasDeadStatesToAccept(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton intersection(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isEmpty(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isTotal(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isTotal(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton minus(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::automaton::Automaton optional(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton removeDeadStates(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton reverse(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton reverse(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::util::Set &);
            static jboolean run(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::lang::String &);
            static jboolean run(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::IntsRef &);
            static JArray< jint > topoSortStates(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton union$(const ::java::util::Collection &);
            static ::org::apache::lucene::util::automaton::Automaton union$(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
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
        namespace automaton {
          extern PyType_Def PY_TYPE_DEF(Operations);
          extern PyTypeObject *PY_TYPE(Operations);

          class t_Operations {
          public:
            PyObject_HEAD
            Operations object;
            static PyObject *wrap_Object(const Operations&);
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
