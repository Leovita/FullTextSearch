#ifndef org_apache_lucene_util_automaton_Operations_H
#define org_apache_lucene_util_automaton_Operations_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
    class Set;
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
      }
    }
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
              mid_complement_a5e67dd8bcc82f97,
              mid_concatenate_bf9b166ee219ad33,
              mid_concatenate_940b057f7b986c68,
              mid_determinize_a5e67dd8bcc82f97,
              mid_getCommonPrefix_9c2b286764040f7d,
              mid_getCommonPrefixBytesRef_1c061679eeae4326,
              mid_getCommonSuffixBytesRef_1c061679eeae4326,
              mid_getSingleton_66641ba6a728d903,
              mid_hasDeadStates_4f09c4a87ad07286,
              mid_hasDeadStatesFromInitial_4f09c4a87ad07286,
              mid_hasDeadStatesToAccept_4f09c4a87ad07286,
              mid_intersection_940b057f7b986c68,
              mid_isEmpty_4f09c4a87ad07286,
              mid_isTotal_4f09c4a87ad07286,
              mid_isTotal_3e913a5a845251fe,
              mid_minus_f6be9f29cf00f36c,
              mid_optional_3c5abe7c21896c57,
              mid_removeDeadStates_3c5abe7c21896c57,
              mid_repeat_3c5abe7c21896c57,
              mid_repeat_a5e67dd8bcc82f97,
              mid_repeat_b2b6a096c4efad85,
              mid_reverse_3c5abe7c21896c57,
              mid_reverse_06a886d63eb2616b,
              mid_run_8e8b2b05808f66b0,
              mid_run_3203b24a91cb19a5,
              mid_topoSortStates_d4b9cf4b26e1ad54,
              mid_union_4e55173ce044961b,
              mid_union_940b057f7b986c68,
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
