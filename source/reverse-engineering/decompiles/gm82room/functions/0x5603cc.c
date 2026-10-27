// rea decompile_all
// name: FUN_005603cc
// address: 0x5603cc
// body: available
// range: 0x5603cc-0x560574 inclusive
// range: 0x560581-0x560589 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x560423 (push 0x560575 followed by fs-segment stack chaining); handler 0x560575 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_005603cc(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  BOOL BVar5;
  uint *lp;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;

  lp = (uint *)(param_2 - 8);
  if (8 < param_2) {
    cVar4 = FUN_0055fba8(lp,*(undefined4 *)(param_1 + 0x3c));
    if (cVar4 != '\0') {
      uStackY_2c = 0x560404;
      BVar5 = IsBadReadPtr(lp,8);
      if (BVar5 == 0) {
        cVar4 = '\x01';
        goto LAB_0056040e;
      }
    }
  }
  cVar4 = '\0';
LAB_0056040e:
  if (cVar4 != '\0') {
    uVar1 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_2c;
    uVar2 = *lp;
    uVar3 = *(uint *)(param_2 - 4);
    if ((uVar2 & 0xff000000) == 0xe8000000) {
      *param_3 = 5;
    }
    else if (((uVar3 & 0xf8ff0000) == 0x10ff0000) && (1 < (byte)(((byte)(uVar3 >> 0x18) & 7) - 4)))
    {
      *param_3 = 2;
    }
    else if ((uVar3 & 0xf8ff0000) == 0xd0ff0000) {
      *param_3 = 2;
    }
    else if ((uVar3 & 0xffff00) == 0x14ff00) {
      *param_3 = 3;
    }
    else if (((uVar3 & 0xf8ff00) == 0x50ff00) && (((byte)(uVar3 >> 0x10) & 7) != 4)) {
      *param_3 = 3;
    }
    else if ((uVar3 & 0xffff) == 0x54ff) {
      *param_3 = 4;
    }
    else if ((uVar2 & 0xffff0000) == 0x15ff0000) {
      *param_3 = 6;
    }
    else if (((uVar2 & 0xf8ff0000) == 0x90ff0000) && (((byte)(uVar2 >> 0x18) & 7) != 4)) {
      *param_3 = 6;
    }
    else if ((uVar2 & 0xffff00) == 0x94ff00) {
      *param_3 = 7;
    }
    else if ((uVar2 & 0xff00) == 0x9a00) {
      *param_3 = 7;
    }
    else {
      cVar4 = '\0';
    }
    *in_FS_OFFSET = uVar1;
  }
  return cVar4;
}
