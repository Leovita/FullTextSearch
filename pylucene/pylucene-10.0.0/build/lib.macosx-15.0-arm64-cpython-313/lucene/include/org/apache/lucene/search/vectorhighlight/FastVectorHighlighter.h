#ifndef org_apache_lucene_search_vectorhighlight_FastVectorHighlighter_H
#define org_apache_lucene_search_vectorhighlight_FastVectorHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace vectorhighlight {
          class FieldQuery;
          class FragmentsBuilder;
          class FragListBuilder;
        }
        namespace highlight {
          class Encoder;
        }
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FastVectorHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_c485d474c3ac8ca0,
              mid_init$_85279f246dede156,
              mid_getBestFragment_32ddffb54f37d549,
              mid_getBestFragment_cf0e0f88c462cdfc,
              mid_getBestFragments_aa57ac08dad61b39,
              mid_getBestFragments_05c4936dff4d9043,
              mid_getBestFragments_8a88a78c279e68cd,
              mid_getFieldQuery_3559a10f988b8d1e,
              mid_getFieldQuery_a0a3e964c6793e49,
              mid_getPhraseLimit_20fbf7565993c3d7,
              mid_isFieldMatch_947277eca0748c4e,
              mid_isPhraseHighlight_947277eca0748c4e,
              mid_setPhraseLimit_540b2b23d51b1efd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FastVectorHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FastVectorHighlighter(const FastVectorHighlighter& obj) : ::java::lang::Object(obj) {}

            static jboolean DEFAULT_FIELD_MATCH;
            static jboolean DEFAULT_PHRASE_HIGHLIGHT;

            FastVectorHighlighter();
            FastVectorHighlighter(jboolean, jboolean);
            FastVectorHighlighter(jboolean, jboolean, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &);

            ::java::lang::String getBestFragment(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint) const;
            ::java::lang::String getBestFragment(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, jint) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, jint, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::java::util::Set &, jint, jint, const ::org::apache::lucene::search::vectorhighlight::FragListBuilder &, const ::org::apache::lucene::search::vectorhighlight::FragmentsBuilder &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery getFieldQuery(const ::org::apache::lucene::search::Query &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery getFieldQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &) const;
            jint getPhraseLimit() const;
            jboolean isFieldMatch() const;
            jboolean isPhraseHighlight() const;
            void setPhraseLimit(jint) const;
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
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(FastVectorHighlighter);
          extern PyTypeObject *PY_TYPE(FastVectorHighlighter);

          class t_FastVectorHighlighter {
          public:
            PyObject_HEAD
            FastVectorHighlighter object;
            static PyObject *wrap_Object(const FastVectorHighlighter&);
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
