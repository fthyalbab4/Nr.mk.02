// rea decompile_all
// name: FUN_0065adac
// address: 0x65adac
// body: available
// range: 0x65adac-0x65ae91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65add4 (push 0x65ae92 followed by fs-segment stack chaining); handler 0x65ae92 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065adac(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 local_8;

  local_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  local_24 = 0;
  puStack_34 = (undefined1 *)0x65adc9;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_38 = &LAB_0065ae92;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  uVar2 = FUN_00405fac(&PTR_LAB_0050b4b8,1);
  FUN_0050c318(uVar2,local_8);
  iVar3 = FUN_0050bbe0(uVar2);
  if (iVar3 == 0x12d) {
    uVar4 = FUN_0050bbe0(uVar2);
    *(undefined4 *)(param_1 + 4) = uVar4;
    FUN_00409dfc(param_1 + 8,&DAT_00658750,1,uVar4);
    iVar3 = *(int *)(param_1 + 4);
    if (-1 < iVar3 + -1) {
      local_c = 0;
      do {
        FUN_0065a47c(uVar2,&local_24);
        FUN_00409360(*(int *)(param_1 + 8) + local_c * 0x18,&local_24,&DAT_00615f70);
        local_c = local_c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00405fdc(uVar2);
  }
  else {
    FUN_00405fdc(uVar2);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0065ae99;
  puStack_38 = (undefined1 *)0x65ae89;
  FUN_004090d0(&local_24,&DAT_00615f70,puVar1);
  puStack_38 = (undefined1 *)0x65ae91;
  thunk_FUN_004072d8(&local_8);
  return;
}
