#ifndef org_apache_lucene_search_TopTermsRewrite_H
#define org_apache_lucene_search_TopTermsRewrite_H

#include "org/apache/lucene/search/TermCollectingRewrite.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class MultiTermQuery;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopTermsRewrite : public ::org::apache::lucene::search::TermCollectingRewrite {
         public:
          enum {
            mid_init$_540b2b23d51b1efd,
            mid_equals_570b5248a6da3ef6,
            mid_getSize_20fbf7565993c3d7,
            mid_hashCode_20fbf7565993c3d7,
            mid_rewrite_dcf1727ad038e63a,
            mid_getMaxSize_20fbf7565993c3d7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopTermsRewrite(jobject obj) : ::org::apache::lucene::search::TermCollectingRewrite(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopTermsRewrite(const TopTermsRewrite& obj) : ::org::apache::lucene::search::TermCollectingRewrite(obj) {}

          TopTermsRewrite(jint);

          jboolean equals(const ::java::lang::Object &) const;
          jint getSize() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::MultiTermQuery &) const;
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
        extern PyType_Def PY_TYPE_DEF(TopTermsRewrite);
        extern PyTypeObject *PY_TYPE(TopTermsRewrite);

        class t_TopTermsRewrite {
        public:
          PyObject_HEAD
          TopTermsRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopTermsRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopTermsRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopTermsRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
