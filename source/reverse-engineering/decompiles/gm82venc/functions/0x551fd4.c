// rea decompile_all
// name: FUN_00551fd4
// address: 0x551fd4
// body: available
// range: 0x551fd4-0x552131 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x551ff0 (push 0x552132 followed by fs-segment stack chaining); handler 0x552132 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00551fd4(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *in_FS_OFFSET;
  bool bVar7;
  int in_stack_00000004;
  undefined4 *puStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  piVar6 = (int *)(in_stack_00000004 + -4);
  puStack_24 = &LAB_00552132;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  FUN_004158a4(*piVar6,&local_8);
  FUN_004081e8(piVar6,local_8);
  FUN_0041733c(*piVar6,&local_c);
  puStack_2c = (undefined4 *)0x552022;
  cVar2 = FUN_00542f40(local_c,L".bpl",0);
  if (cVar2 != '\0') {
    FUN_0053890c(*piVar6,&local_10);
    puStack_2c = (undefined4 *)0x55203e;
    FUN_004081e8(piVar6,local_10);
    iVar3 = *piVar6;
    if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
      puStack_2c = (undefined4 *)0x552058;
      iVar3 = FUN_00407488(piVar6,*piVar6);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    if (iVar4 == 5) {
      iVar3 = *piVar6;
      if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
        puStack_2c = (undefined4 *)0x552080;
        iVar3 = FUN_00407488(piVar6,*piVar6);
      }
      bVar7 = (PTR_DAT_006895d4[(uint)*(ushort *)(iVar3 + 6) * 2] & 4) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      iVar3 = *piVar6;
      if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
        puStack_2c = (undefined4 *)0x5520b3;
        iVar3 = FUN_00407488(piVar6,*piVar6);
      }
      bVar7 = (PTR_DAT_006895d4[(uint)*(ushort *)(iVar3 + 8) * 2] & 4) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      iVar3 = FUN_00408d44(&PTR_DAT_00552168,*piVar6);
      if (iVar3 != 1) {
        puStack_2c = (undefined4 *)0x5520e7;
        iVar3 = FUN_00408d44(&LAB_0055217c,*piVar6);
        if (iVar3 != 1) goto LAB_00552117;
      }
      puStack_2c = &local_14;
      FUN_00408984(*piVar6,4,2);
      uVar5 = FUN_0041663c(local_14,0);
      *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x80) = uVar5;
    }
  }
LAB_00552117:
  puVar1 = puStack_24;
  *in_FS_OFFSET = (int)puStack_2c;
  puStack_24 = &LAB_00552139;
  iStack_28 = 0x552131;
  thunk_FUN_004072fc(&local_14,4,puVar1);
  return;
}
