#ifndef org_apache_lucene_misc_index_BinaryDocValueSelector_H
#define org_apache_lucene_misc_index_BinaryDocValueSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class BitSet;
      }
      namespace misc {
        namespace index {
          class IndexRearranger$DocumentSelector;
        }
      }
      namespace index {
        class CodecReader;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace index {

          class BinaryDocValueSelector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_848bcdb286de0107,
              mid_createDeleteSelectorFromIndex_50d17fee39d7a855,
              mid_createLiveSelectorsFromIndex_55a1ff879050485a,
              mid_getFilteredDocs_8ce5ade4c3bcb480,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BinaryDocValueSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BinaryDocValueSelector(const BinaryDocValueSelector& obj) : ::java::lang::Object(obj) {}

            BinaryDocValueSelector(const ::java::lang::String &, const ::java::util::Set &);

            static ::org::apache::lucene::misc::index::IndexRearranger$DocumentSelector createDeleteSelectorFromIndex(const ::java::lang::String &, const ::org::apache::lucene::store::Directory &);
            static ::java::util::List createLiveSelectorsFromIndex(const ::java::lang::String &, const ::org::apache::lucene::store::Directory &);
            ::org::apache::lucene::util::BitSet getFilteredDocs(const ::org::apache::lucene::index::CodecReader &) const;
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
      namespace misc {
        namespace index {
          extern PyType_Def PY_TYPE_DEF(BinaryDocValueSelector);
          extern PyTypeObject *PY_TYPE(BinaryDocValueSelector);

          class t_BinaryDocValueSelector {
          public:
            PyObject_HEAD
            BinaryDocValueSelector object;
            static PyObject *wrap_Object(const BinaryDocValueSelector&);
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
