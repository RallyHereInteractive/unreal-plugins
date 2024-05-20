# RHAPI_BaseModel <a id="group__RHAPI__BaseModel"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Model`](#structFRHAPI__Model) | Base class for all RallyHereAPI data models.

## struct `FRHAPI_Model` <a id="structFRHAPI__Model"></a>

Base class for all RallyHereAPI data models.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`GENERATED_BODY`](#structFRHAPI__Model_1aa903e87a078f9bf7d2bb37b08d1a535a)`(WithNoDestructor)` | 
`public inline virtual  `[`~FRHAPI_Model`](#structFRHAPI__Model_1ace9ebc0be8edfb46766c86c756630ee4)`()` | 
`public inline virtual bool `[`FromJson`](#structFRHAPI__Model_1a96477760fd6707ecca6b56b8d151beab)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public inline virtual void `[`WriteJson`](#structFRHAPI__Model_1a1571819a105ad9b51e09b51d134c2d0a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.

#### Members

#### `public  `[`GENERATED_BODY`](#structFRHAPI__Model_1aa903e87a078f9bf7d2bb37b08d1a535a)`(WithNoDestructor)` <a id="structFRHAPI__Model_1aa903e87a078f9bf7d2bb37b08d1a535a"></a>

#### `public inline virtual  `[`~FRHAPI_Model`](#structFRHAPI__Model_1ace9ebc0be8edfb46766c86c756630ee4)`()` <a id="structFRHAPI__Model_1ace9ebc0be8edfb46766c86c756630ee4"></a>

#### `public inline virtual bool `[`FromJson`](#structFRHAPI__Model_1a96477760fd6707ecca6b56b8d151beab)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Model_1a96477760fd6707ecca6b56b8d151beab"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public inline virtual void `[`WriteJson`](#structFRHAPI__Model_1a1571819a105ad9b51e09b51d134c2d0a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Model_1a1571819a105ad9b51e09b51d134c2d0a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

