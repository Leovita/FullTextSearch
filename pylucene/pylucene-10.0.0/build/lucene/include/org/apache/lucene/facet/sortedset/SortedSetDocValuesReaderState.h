#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class IndexReader;
      }
      namespace facet {
        namespace sortedset {
          class SortedSetDocValuesReaderState$OrdRange;
          class SortedSetDocValuesReaderState$DimTree;
        }
        class FacetsConfig;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Iterable;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class SortedSetDocValuesReaderState : public ::java::lang::Object {
           public:
            enum {
              mid_getDimTree_d565bf35416f4504,
              mid_getDims_85e1732aaf0b83f3,
              mid_getDocValues_82243807cdadc8f0,
              mid_getFacetsConfig_c3113bd5035d2cb5,
              mid_getField_e7df854526d67fa3,
              mid_getOrdRange_00227a91277a7f9c,
              mid_getPrefixToOrdRange_5004bdf19ed33453,
              mid_getReader_9596617cc74c49f2,
              mid_getSize_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesReaderState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesReaderState(const SortedSetDocValuesReaderState& obj) : ::java::lang::Object(obj) {}

            static jint INVALID_ORDINAL;

            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$DimTree getDimTree(const ::java::lang::String &) const;
            ::java::lang::Iterable getDims() const;
            ::org::apache::lucene::index::SortedSetDocValues getDocValues() const;
            ::org::apache::lucene::facet::FacetsConfig getFacetsConfig() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$OrdRange getOrdRange(const ::java::lang::String &) const;
            ::java::util::Map getPrefixToOrdRange() const;
            ::org::apache::lucene::index::IndexReader getReader() const;
            jint getSize() const;
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
      namespace facet {
        namespace sortedset {
          extern PyType_Def PY_TYPE_DEF(SortedSetDocValuesReaderState);
          extern PyTypeObject *PY_TYPE(SortedSetDocValuesReaderState);

          class t_SortedSetDocValuesReaderState {
          public:
            PyObject_HEAD
            SortedSetDocValuesReaderState object;
            static PyObject *wrap_Object(const SortedSetDocValuesReaderState&);
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
