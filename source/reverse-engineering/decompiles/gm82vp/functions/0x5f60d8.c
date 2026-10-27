// rea decompile_all
// name: FUN_005f60d8
// address: 0x5f60d8
// body: available
// range: 0x5f60d8-0x5f61ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f60fc (push 0x5f61cf followed by fs-segment stack chaining); handler 0x5f61cf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f60d8(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x5f60ec;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_1c = &LAB_005f61cf;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  cVar2 = FUN_00416b0c(local_8);
  if (cVar2 != '\0') {
    FUN_005f57a4();
    (**(code **)(**(int **)(DAT_008506c8[0xe8] + 0x2c0) + 0x68))
              (*(int **)(DAT_008506c8[0xe8] + 0x2c0),local_8);
    FUN_004ba900(DAT_008506c8[0xe8],5);
    FUN_004bb578(DAT_008506c8[0xe8],1);
    (**(code **)(*(int *)DAT_008506c8[0xe8] + 0x104))((int *)DAT_008506c8[0xe8],0);
    FUN_004847fc(DAT_008506c8[0xe6],0 < param_2);
    if (0 < param_2) {
      FUN_0048480c(DAT_008506c8[0xe6],param_2);
    }
    if (DAT_006885d0 == '\0') {
      if (DAT_006885f0 == '\0') {
        FUN_004e6d64(DAT_008506c8);
      }
      else {
        (**(code **)(*DAT_008506c8 + 0x110))();
      }
    }
    else {
      while ((char)PTR_FUN_0068861c != '\0') {
        FUN_00628b78();
      }
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005f61d6;
  puStack_1c = (undefined1 *)0x5f61ce;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
