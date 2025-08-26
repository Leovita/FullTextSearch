#ifndef org_xml_sax_helpers_DefaultHandler_H
#define org_xml_sax_helpers_DefaultHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {

        class DefaultHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_characters_186bb5d1c1aec30c,
            mid_endDocument_e7bdbe105ce1bafb,
            mid_endElement_f29246d136b6952d,
            mid_endPrefixMapping_ee46a189998009d6,
            mid_ignorableWhitespace_186bb5d1c1aec30c,
            mid_notationDecl_f29246d136b6952d,
            mid_processingInstruction_0dd012a11c3f389b,
            mid_skippedEntity_ee46a189998009d6,
            mid_startDocument_e7bdbe105ce1bafb,
            mid_startPrefixMapping_0dd012a11c3f389b,
            mid_unparsedEntityDecl_413d657918c4fe77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DefaultHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DefaultHandler(const DefaultHandler& obj) : ::java::lang::Object(obj) {}

          DefaultHandler();

          void characters(const JArray< jchar > &, jint, jint) const;
          void endDocument() const;
          void endElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
          void endPrefixMapping(const ::java::lang::String &) const;
          void ignorableWhitespace(const JArray< jchar > &, jint, jint) const;
          void notationDecl(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
          void processingInstruction(const ::java::lang::String &, const ::java::lang::String &) const;
          void skippedEntity(const ::java::lang::String &) const;
          void startDocument() const;
          void startPrefixMapping(const ::java::lang::String &, const ::java::lang::String &) const;
          void unparsedEntityDecl(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {
        extern PyType_Def PY_TYPE_DEF(DefaultHandler);
        extern PyTypeObject *PY_TYPE(DefaultHandler);

        class t_DefaultHandler {
        public:
          PyObject_HEAD
          DefaultHandler object;
          static PyObject *wrap_Object(const DefaultHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
