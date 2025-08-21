#ifndef org_apache_lucene_search_TermInSetQuery_H
#define org_apache_lucene_search_TermInSetQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
        class BytesRefIterator;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
        class QueryVisitor;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermInSetQuery : public ::org::apache::lucene::search::MultiTermQuery {
         public:
          enum {
            mid_init$_d7fabad76bfcc751,
            mid_init$_fc5fcde8b486569a,
            mid_equals_570b5248a6da3ef6,
            mid_getBytesRefIterator_bf0613f85af6401c,
            mid_getChildResources_aa58b3beec16cbbd,
            mid_getTermsCount_16939d9d0a9a9721,
            mid_hashCode_20fbf7565993c3d7,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_toString_cb0eb1432185fc94,
            mid_visit_1b22ec612b613eea,
            mid_getTermsEnum_b346bdb4749db660,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermInSetQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermInSetQuery(const TermInSetQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          TermInSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          TermInSetQuery(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &, const ::java::lang::String &, const ::java::util::Collection &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::BytesRefIterator getBytesRefIterator() const;
          ::java::util::Collection getChildResources() const;
          jlong getTermsCount() const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
        extern PyType_Def PY_TYPE_DEF(TermInSetQuery);
        extern PyTypeObject *PY_TYPE(TermInSetQuery);

        class t_TermInSetQuery {
        public:
          PyObject_HEAD
          TermInSetQuery object;
          static PyObject *wrap_Object(const TermInSetQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
