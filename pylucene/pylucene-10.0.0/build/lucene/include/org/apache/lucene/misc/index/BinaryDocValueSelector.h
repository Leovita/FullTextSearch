#ifndef org_apache_lucene_misc_index_BinaryDocValueSelector_H
#define org_apache_lucene_misc_index_BinaryDocValueSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace index {
          class IndexRearranger$DocumentSelector;
        }
      }
      namespace store {
        class Directory;
      }
      namespace util {
        class BitSet;
        class BytesRef;
      }
      namespace index {
        class CodecReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class Serializable;
  }
  namespace util {
    class Set;
    class List;
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
              mid_init$_00da2676a23e3a62,
              mid_createDeleteSelectorFromIndex_3cc7cde479ee8880,
              mid_createLiveSelectorsFromIndex_62d2ac41d1c4183c,
              mid_getFilteredDocs_e876ffa95ffa8743,
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
