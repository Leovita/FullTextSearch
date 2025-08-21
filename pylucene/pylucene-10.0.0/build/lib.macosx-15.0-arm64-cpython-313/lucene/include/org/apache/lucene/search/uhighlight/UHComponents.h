#ifndef org_apache_lucene_search_uhighlight_UHComponents_H
#define org_apache_lucene_search_uhighlight_UHComponents_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace uhighlight {
          class UnifiedHighlighter$HighlightFlag;
          class PhraseHelper;
          class LabelledCharArrayMatcher;
        }
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
  namespace util {
    class Set;
    namespace function {
      class Predicate;
    }
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
              mid_init$_18ce87d56e972ef6,
              mid_automata_15797600af750aec,
              mid_equals_570b5248a6da3ef6,
              mid_field_09a7afff1868fc5e,
              mid_fieldMatcher_318ca0ecdce1a7dd,
              mid_hasUnrecognizedQueryPart_947277eca0748c4e,
              mid_hashCode_20fbf7565993c3d7,
              mid_highlightFlags_4df174295554d7bd,
              mid_phraseHelper_4a796bf0685937b1,
              mid_query_a3eacfacada795d4,
              mid_terms_15e86a23d022d444,
              mid_toString_09a7afff1868fc5e,
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
