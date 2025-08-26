#ifndef org_apache_lucene_search_uhighlight_UHComponents_H
#define org_apache_lucene_search_uhighlight_UHComponents_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class LabelledCharArrayMatcher;
          class PhraseHelper;
          class UnifiedHighlighter$HighlightFlag;
        }
        class Query;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Predicate;
    }
    class Set;
  }
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class UHComponents : public ::java::lang::Record {
           public:
            enum {
              mid_init$_0afd4287dbfedf7e,
              mid_automata_022999537836f214,
              mid_equals_00d17418847797d4,
              mid_field_e7df854526d67fa3,
              mid_fieldMatcher_e9ff27faf5d76fa6,
              mid_hasUnrecognizedQueryPart_9aa4f33e82ea333f,
              mid_hashCode_bd89ce15dad49192,
              mid_highlightFlags_79131c6bbcf08916,
              mid_phraseHelper_a43c769312b3a412,
              mid_query_ffa7bd087b2a75aa,
              mid_terms_cb1c5650e8bc510b,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UHComponents(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UHComponents(const UHComponents& obj) : ::java::lang::Record(obj) {}

            UHComponents(const ::java::lang::String &, const ::java::util::function::Predicate &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::util::BytesRef > &, const ::org::apache::lucene::search::uhighlight::PhraseHelper &, const JArray< ::org::apache::lucene::search::uhighlight::LabelledCharArrayMatcher > &, jboolean, const ::java::util::Set &);

            JArray< ::org::apache::lucene::search::uhighlight::LabelledCharArrayMatcher > automata() const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String field() const;
            ::java::util::function::Predicate fieldMatcher() const;
            jboolean hasUnrecognizedQueryPart() const;
            jint hashCode() const;
            ::java::util::Set highlightFlags() const;
            ::org::apache::lucene::search::uhighlight::PhraseHelper phraseHelper() const;
            ::org::apache::lucene::search::Query query() const;
            JArray< ::org::apache::lucene::util::BytesRef > terms() const;
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
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(UHComponents);
          extern PyTypeObject *PY_TYPE(UHComponents);

          class t_UHComponents {
          public:
            PyObject_HEAD
            UHComponents object;
            static PyObject *wrap_Object(const UHComponents&);
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
