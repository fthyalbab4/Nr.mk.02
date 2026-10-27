// rea decompile_all
// name: FUN_005bc328
// address: 0x5bc328
// body: available
// range: 0x5bc328-0x5bc463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bc352 (push 0x5bc464 followed by fs-segment stack chaining); handler 0x5bc464 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bc328(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int local_28;
  undefined1 local_24 [24];
  undefined4 local_c;
  undefined4 local_8;

  local_8 = 0;
  local_c = 0;
  puStack_38 = (undefined1 *)0x5bc347;
  FUN_00408ff8(local_24,&DAT_00615f70);
  puStack_3c = &LAB_005bc464;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_28 = *(int *)(*(int *)(DAT_0084f054 + 0x388) + 0x2c0) + -2;
  puStack_38 = &stack0xfffffffc;
  if (0 < local_28) {
    iVar5 = 1;
    puStack_38 = &stack0xfffffffc;
    do {
      FUN_0059fd08(*(undefined4 *)(DAT_0084f054 + 0x388),0,iVar5,&local_8);
      uStack_40 = 1;
      uVar3 = FUN_00616588(&DAT_006160fc,1,local_8);
      cVar2 = FUN_00616664(uVar3);
      if (cVar2 == '\0') {
        FUN_0059fd78(*(undefined4 *)(DAT_0084f054 + 0x388),1,iVar5,L"COMPILE ERROR");
        FUN_00405fdc(uVar3);
      }
      else {
        uVar4 = FUN_0060d2cc(&DAT_0060b63c,1,0,0,0,0,0,0);
        FUN_0058869c(uVar4,uVar4,uVar3,local_24);
        FUN_00405fdc(uVar4);
        FUN_005baaf4(local_24,&local_c);
        FUN_0059fd78(*(undefined4 *)(DAT_0084f054 + 0x388),1,iVar5,local_c);
        FUN_00405fdc(uVar3);
      }
      iVar5 = iVar5 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_005bc46b;
  puStack_3c = (undefined1 *)0x5bc456;
  FUN_004090d0(local_24,&DAT_00615f70,puVar1);
  puStack_3c = (undefined1 *)0x5bc463;
  thunk_FUN_004072fc(&local_c,2);
  return;
}
