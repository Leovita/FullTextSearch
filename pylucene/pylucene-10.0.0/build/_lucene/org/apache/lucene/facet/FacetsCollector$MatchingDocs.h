#ifndef org_apache_lucene_facet_FacetsCollector$MatchingDocs_H
#define org_apache_lucene_facet_FacetsCollector$MatchingDocs_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSet;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsCollector$MatchingDocs : public ::java::lang::Record {
         public:
          enum {
            mid_init$_d0073cadd7472141,
            mid_bits_a219f8c3cb9d9e57,
            mid_context_73a30448bd05c3e2,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_scores_808165844ea67079,
            mid_toString_09a7afff1868fc5e,
            mid_totalHits_20fbf7565993c3d7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsCollector$MatchingDocs(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsCollector$MatchingDocs(const FacetsCollector$MatchingDocs& obj) : ::java::lang::Record(obj) {}

          FacetsCollector$MatchingDocs(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::DocIdSet &, jint, const JArray< jfloat > &);

          ::org::apache::lucene::search::DocIdSet bits() const;
          ::org::apache::lucene::index::LeafReaderContext context() const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          JArray< jfloat > scores() const;
          ::java::lang::String toString() const;
          jint totalHits() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetsCollector$MatchingDocs);
        extern PyTypeObject *PY_TYPE(FacetsCollector$MatchingDocs);

        class t_FacetsCollector$MatchingDocs {
        public:
          PyObject_HEAD
          FacetsCollector$MatchingDocs object;
          static PyObject *wrap_Object(const FacetsCollector$MatchingDocs&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
