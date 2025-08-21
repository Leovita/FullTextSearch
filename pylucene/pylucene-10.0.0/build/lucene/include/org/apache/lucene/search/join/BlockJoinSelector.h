#ifndef org_apache_lucene_search_join_BlockJoinSelector_H
#define org_apache_lucene_search_join_BlockJoinSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class SortedNumericDocValues;
        class SortedDocValues;
        class NumericDocValues;
      }
      namespace search {
        class DocIdSetIterator;
        namespace join {
          class BlockJoinSelector$Type;
        }
      }
      namespace util {
        class Bits;
        class BitSet;
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
              mid_wrap_ee0ea76495f3d614,
              mid_wrap_d5e31816f4849c98,
              mid_wrap_0829d97008139f68,
              mid_wrap_ec4c837370055cbb,
              mid_wrap_24bba287f2cef017,
              mid_toIter_d2961d83f0ae333c,
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
