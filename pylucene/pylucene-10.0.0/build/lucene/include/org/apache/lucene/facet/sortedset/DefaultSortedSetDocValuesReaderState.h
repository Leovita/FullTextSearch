#ifndef org_apache_lucene_facet_sortedset_DefaultSortedSetDocValuesReaderState_H
#define org_apache_lucene_facet_sortedset_DefaultSortedSetDocValuesReaderState_H

#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesReaderState.h"

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
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class DefaultSortedSetDocValuesReaderState : public ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState {
           public:
            enum {
              mid_init$_3afc9b34b30e1036,
              mid_init$_5020d716d5671194,
              mid_getChildResources_4a269b968b3a511f,
              mid_getDimTree_d565bf35416f4504,
              mid_getDims_85e1732aaf0b83f3,
              mid_getDocValues_82243807cdadc8f0,
              mid_getFacetsConfig_c3113bd5035d2cb5,
              mid_getField_e7df854526d67fa3,
              mid_getOrdRange_00227a91277a7f9c,
              mid_getPrefixToOrdRange_5004bdf19ed33453,
              mid_getReader_9596617cc74c49f2,
              mid_getSize_bd89ce15dad49192,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            enum {
              fid_reader,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DefaultSortedSetDocValuesReaderState(jobject obj) : ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DefaultSortedSetDocValuesReaderState(const DefaultSortedSetDocValuesReaderState& obj) : ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState(obj) {}

            ::org::apache::lucene::index::IndexReader _get_reader() const;

            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::facet::FacetsConfig &);
            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsConfig &);

            ::java::util::Collection getChildResources() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$DimTree getDimTree(const ::java::lang::String &) const;
            ::java::lang::Iterable getDims() const;
            ::org::apache::lucene::index::SortedSetDocValues getDocValues() const;
            ::org::apache::lucene::facet::FacetsConfig getFacetsConfig() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$OrdRange getOrdRange(const ::java::lang::String &) const;
            ::java::util::Map getPrefixToOrdRange() const;
            ::org::apache::lucene::index::IndexReader getReader() const;
            jint getSize() const;
            jlong ramBytesUsed() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(DefaultSortedSetDocValuesReaderState);
          extern PyTypeObject *PY_TYPE(DefaultSortedSetDocValuesReaderState);

          class t_DefaultSortedSetDocValuesReaderState {
          public:
            PyObject_HEAD
            DefaultSortedSetDocValuesReaderState object;
            static PyObject *wrap_Object(const DefaultSortedSetDocValuesReaderState&);
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
