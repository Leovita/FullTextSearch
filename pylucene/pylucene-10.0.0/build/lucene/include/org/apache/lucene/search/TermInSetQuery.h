#ifndef org_apache_lucene_search_TermInSetQuery_H
#define org_apache_lucene_search_TermInSetQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        class MultiTermQuery$RewriteMethod;
      }
      namespace util {
        class Accountable;
        class BytesRef;
        class BytesRefIterator;
      }
    }
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
            mid_init$_34d6f70ae7d5f6ad,
            mid_init$_dd09338d93a88a23,
            mid_equals_00d17418847797d4,
            mid_getBytesRefIterator_456b4b9059047e2a,
            mid_getChildResources_4a269b968b3a511f,
            mid_getTermsCount_0f176418e3e16541,
            mid_hashCode_bd89ce15dad49192,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            mid_getTermsEnum_05b4875ff8d0c914,
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
