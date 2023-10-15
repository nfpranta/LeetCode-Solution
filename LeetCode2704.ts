type ToBeOrNotToBe = {
  toBe: (val: any) => boolean;
  notToBe: (val: any) => boolean;
};

function expect(val: any) {
  return {
    toBe: (val2) => {
      if (val2 === val) return true;
      throw "Not Equal";
    },
    notToBe: (val2) => {
      if (val2 !== val) return true;
      throw "Equal";
    },
  };
}

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
