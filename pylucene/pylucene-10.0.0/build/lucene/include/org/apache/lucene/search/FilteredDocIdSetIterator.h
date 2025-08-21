#ifndef org_apache_lucene_search_FilteredDocIdSetIterator_H
#define org_apache_lucene_search_FilteredDocIdSetIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FilteredDocIdSetIterator : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_ed30298d46fa551b,
            mid_advance_3c9bba330f083871,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_getDelegate_fc644a826c65d236,
            mid_nextDoc_20fbf7565993c3d7,
            mid_match_ae22d3a856ad56f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilteredDocIdSetIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilteredDocIdSetIterator(const FilteredDocIdSetIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          FilteredDocIdSetIterator(const ::org::apache::lucene::search::DocIdSetIterator &);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          ::org::apache::lucene::search::DocIdSetIterator getDelegate() const;
          jint nextDoc() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FilteredDocIdSetIterator);
        extern PyTypeObject *PY_TYPE(FilteredDocIdSetIterator);

        class t_FilteredDocIdSetIterator {
        public:
          PyObject_HEAD
          FilteredDocIdSetIterator object;
          static PyObject *wrap_Object(const FilteredDocIdSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
