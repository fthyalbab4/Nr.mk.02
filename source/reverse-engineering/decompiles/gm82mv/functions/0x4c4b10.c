// rea decompile_all
// name: FUN_004c4b10
// address: 0x4c4b10
// body: available
// range: 0x4c4b10-0x4c4c05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c4b40 (push 0x4c4c06 followed by fs-segment stack chaining); handler 0x4c4c06 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c4b10(int param_1,undefined4 param_2,char param_3,char param_4,char param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_14;
  int local_10;

  local_10 = 0;
  puStack_28 = (undefined1 *)0x4c4b32;
  iVar3 = FUN_00405fac(&PTR_LAB_0042e000,1);
  puStack_2c = &LAB_004c4c06;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00406268(param_1,iVar3);
  if (0 < *(int *)(iVar3 + 8)) {
    local_14 = FUN_00438f2c(iVar3,param_2);
    iVar5 = local_14;
    if (local_14 == -1) {
      if (param_3 == '\0') {
        local_14 = 0;
        iVar5 = local_14;
      }
      else {
        local_14 = *(int *)(iVar3 + 8) + -1;
        iVar5 = local_14;
      }
    }
    do {
      if (param_3 == '\0') {
        if (iVar5 == 0) {
          iVar5 = *(int *)(iVar3 + 8);
        }
        iVar5 = iVar5 + -1;
      }
      else {
        iVar5 = iVar5 + 1;
        if (iVar5 == *(int *)(iVar3 + 8)) {
          iVar5 = 0;
        }
      }
      iVar4 = FUN_00438ec4(iVar3,iVar5);
      cVar2 = FUN_00406268(iVar4);
      if (((cVar2 != '\0') && ((param_5 == '\0' || (*(char *)(iVar4 + 0x1e8) != '\0')))) &&
         ((param_4 == '\0' || (*(int *)(iVar4 + 0x34) == param_1)))) {
        local_10 = iVar4;
      }
    } while ((local_10 == 0) && (iVar5 != local_14));
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004c4c0d;
  puStack_2c = (undefined1 *)0x4c4c05;
  FUN_00405fdc(iVar3,uStack_30,puVar1);
  return;
}
