// rea decompile_all
// name: FUN_00481c04
// address: 0x481c04
// body: available
// range: 0x481c04-0x481cab inclusive
// range: 0x481cb3-0x481cb9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x481c26 (push 0x481cac followed by fs-segment stack chaining); handler 0x481cac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481c04(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  short sVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x481c1b;
  (**(code **)(*param_1 + 0x18))();
  puStack_20 = &LAB_00481cac;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  uVar3 = EnumClipboardFormats(0);
  sVar6 = (short)uVar3;
  while( true ) {
    if (sVar6 == 0) {
      FUN_0041be80(&LAB_0048158c,1,PTR_LAB_00688b30);
      FUN_00406ab4();
      puVar1 = puStack_1c;
      *in_FS_OFFSET = uStack_24;
      puStack_1c = (undefined1 *)0x481cb3;
      puStack_20 = (undefined1 *)0x481cab;
      (**(code **)(*param_1 + 0x14))(param_1,*param_1,puVar1);
      return;
    }
    cVar2 = FUN_00460050(&PTR_LAB_00457b10,uVar3);
    if (cVar2 != '\0') break;
    uVar3 = EnumClipboardFormats(uVar3 & 0xffff);
    sVar6 = (short)uVar3;
  }
  pvVar4 = GetClipboardData(uVar3 & 0xffff);
  pvVar5 = GetClipboardData(9);
  FUN_0045ff68(param_2,uVar3,pvVar4,pvVar5);
  FUN_00406ba8();
  return;
}
