#ifndef org_apache_lucene_search_join_ToParentBlockJoinSortField_H
#define org_apache_lucene_search_join_ToParentBlockJoinSortField_H

#include "org/apache/lucene/search/SortField.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {
          class BitSetProducer;
        }
        class SortField$Type;
        class Pruning;
        class FieldComparator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class ToParentBlockJoinSortField : public ::org::apache::lucene::search::SortField {
           public:
            enum {
              mid_init$_5a7fa0a828ddc00d,
              mid_init$_ca3df6bbb534a004,
              mid_equals_00d17418847797d4,
              mid_getComparator_4f2ccf90fa477e37,
              mid_hashCode_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ToParentBlockJoinSortField(jobject obj) : ::org::apache::lucene::search::SortField(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ToParentBlockJoinSortField(const ToParentBlockJoinSortField& obj) : ::org::apache::lucene::search::SortField(obj) {}

            ToParentBlockJoinSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean, const ::org::apache::lucene::search::join::BitSetProducer &, const ::org::apache::lucene::search::join::BitSetProducer &);
            ToParentBlockJoinSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean, jboolean, const ::org::apache::lucene::search::join::BitSetProducer &, const ::org::apache::lucene::search::join::BitSetProducer &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::FieldComparator getComparator(jint, const ::org::apache::lucene::search::Pruning &) const;
            jint hashCode() const;
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
        namespace join {
          extern PyType_Def PY_TYPE_DEF(ToParentBlockJoinSortField);
          extern PyTypeObject *PY_TYPE(ToParentBlockJoinSortField);

          class t_ToParentBlockJoinSortField {
          public:
            PyObject_HEAD
            ToParentBlockJoinSortField object;
            static PyObject *wrap_Object(const ToParentBlockJoinSortField&);
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
