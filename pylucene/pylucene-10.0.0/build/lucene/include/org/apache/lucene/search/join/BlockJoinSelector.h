#ifndef org_apache_lucene_search_join_BlockJoinSelector_H
#define org_apache_lucene_search_join_BlockJoinSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class SortedDocValues;
        class NumericDocValues;
        class SortedNumericDocValues;
      }
      namespace util {
        class BitSet;
        class Bits;
      }
      namespace search {
        class DocIdSetIterator;
        namespace join {
          class BlockJoinSelector$Type;
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
      namespace search {
        namespace join {

          class BlockJoinSelector : public ::java::lang::Object {
           public:
            enum {
              mid_wrap_e3681fcf40e3eddd,
              mid_wrap_c1b16f9713daee0d,
              mid_wrap_031143e4135166f7,
              mid_wrap_ddaa0c71028e05c7,
              mid_wrap_35adcb60f005eff5,
              mid_toIter_4cb7bd1e9f52fb46,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockJoinSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockJoinSelector(const BlockJoinSelector& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::util::Bits wrap(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::util::BitSet &);
            static ::org::apache::lucene::index::NumericDocValues wrap(const ::org::apache::lucene::index::NumericDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
            static ::org::apache::lucene::index::SortedDocValues wrap(const ::org::apache::lucene::index::SortedDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
            static ::org::apache::lucene::index::NumericDocValues wrap(const ::org::apache::lucene::index::SortedNumericDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
            static ::org::apache::lucene::index::SortedDocValues wrap(const ::org::apache::lucene::index::SortedSetDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
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
          extern PyType_Def PY_TYPE_DEF(BlockJoinSelector);
          extern PyTypeObject *PY_TYPE(BlockJoinSelector);

          class t_BlockJoinSelector {
          public:
            PyObject_HEAD
            BlockJoinSelector object;
            static PyObject *wrap_Object(const BlockJoinSelector&);
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
