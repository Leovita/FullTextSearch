#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState$DimTree_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState$DimTree_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Boolean;
    class Class;
  }
  namespace util {
    class List;
    class PrimitiveIterator$OfInt;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class SortedSetDocValuesReaderState$DimTree : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f40ff503a8ea5682,
              mid_iterator_4e2efb333bca91a5,
              mid_iterator_cdf49fddfa6478a8,
              max_mid
            };

            enum {
              fid_dimStartOrd,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesReaderState$DimTree(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesReaderState$DimTree(const SortedSetDocValuesReaderState$DimTree& obj) : ::java::lang::Object(obj) {}

            jint _get_dimStartOrd() const;

            SortedSetDocValuesReaderState$DimTree(jint, const ::java::util::List &, const ::java::util::List &);

            ::java::util::PrimitiveIterator$OfInt iterator() const;
            ::java::util::PrimitiveIterator$OfInt iterator(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(SortedSetDocValuesReaderState$DimTree);
          extern PyTypeObject *PY_TYPE(SortedSetDocValuesReaderState$DimTree);

          class t_SortedSetDocValuesReaderState$DimTree {
          public:
            PyObject_HEAD
            SortedSetDocValuesReaderState$DimTree object;
            static PyObject *wrap_Object(const SortedSetDocValuesReaderState$DimTree&);
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
