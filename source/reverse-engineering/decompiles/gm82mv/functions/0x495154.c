// rea decompile_all
// name: FUN_00495154
// address: 0x495154
// body: available
// range: 0x495154-0x495429 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LRESULT FUN_00495154(void)

{
  char cVar1;
  int iVar2;
  HMENU pHVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  int in_stack_00000004;
  WPARAM in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_11;
  int local_10;
  int local_c;
  LRESULT local_8;

  if (((DAT_0068f1b0 != 0) && (iVar2 = thunk_FUN_004a9488(DAT_0068f1b0), iVar2 != 0)) &&
     (cVar1 = FUN_004ab1b8(iVar2), cVar1 != '\0')) {
    if (in_stack_0000000c[2] == 0x25) {
      in_stack_0000000c[2] = 0x27;
    }
    else if (in_stack_0000000c[2] == 0x27) {
      in_stack_0000000c[2] = 0x25;
    }
  }
  local_8 = CallNextHookEx(DAT_0068f1a0,in_stack_00000004,in_stack_00000008,
                           (LPARAM)in_stack_0000000c);
  if (local_8 != 0) {
    return local_8;
  }
  if (in_stack_00000004 != 2) {
    return 0;
  }
  iVar2 = 0;
  if ((char)PTR_FUN_0068141c == '\0') {
    PTR_FUN_0068141c._0_1_ = '\x01';
    PostMessageW((HWND)*in_stack_0000000c,0x100,0x28,0);
  }
  iVar5 = in_stack_0000000c[1];
  if (iVar5 != 0x100) {
    if (iVar5 == 0x104) {
      if (in_stack_0000000c[2] == 0x12) {
        FUN_00406268(DAT_0068f1a4);
        return local_8;
      }
    }
    else if (iVar5 == 0x11f) {
      if ((short)((uint)in_stack_0000000c[2] >> 0x10) == -1) {
        bVar6 = in_stack_0000000c[3] == 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        if (DAT_0068f1bc != '\0') {
          return local_8;
        }
        FUN_00406268(DAT_0068f1a4);
        return local_8;
      }
      DAT_0068f1bc = '\0';
      local_11 = ((uint)in_stack_0000000c[2] >> 0x10 & 0x10) != 0;
      if ((bool)local_11) {
        pHVar3 = GetSubMenu((HMENU)in_stack_0000000c[3],(uint)*(ushort *)(in_stack_0000000c + 2));
      }
      else {
        pHVar3 = (HMENU)(uint)*(ushort *)(in_stack_0000000c + 2);
      }
      DAT_0068f1b0 = FUN_004aa728(*(undefined4 *)(DAT_0068f1a4 + 0x354),pHVar3,local_11);
    }
    else if (iVar5 == 0x200) {
      local_10 = in_stack_0000000c[5];
      local_c = in_stack_0000000c[6];
      if ((local_10 != DAT_0068f1b4) || (local_c != DAT_0068f1b8)) {
        iVar2 = FUN_004b996c(&local_10,0);
        DAT_0068f1b4 = local_10;
        DAT_0068f1b8 = local_c;
      }
    }
    goto LAB_004953aa;
  }
  if (in_stack_0000000c[2] == 0xd) {
    *(undefined1 *)(DAT_0068f1a4 + 0x360) = 1;
    goto LAB_004953aa;
  }
  if (in_stack_0000000c[2] == 0x1b) {
    DAT_0068f1bc = '\x01';
    goto LAB_004953aa;
  }
  if (DAT_0068f1b0 == 0) goto LAB_004953aa;
  if ((in_stack_0000000c[2] == 0x27) && (iVar2 = FUN_004a8eb8(DAT_0068f1b0), iVar2 == 0)) {
    iVar2 = FUN_004950a8(1);
  }
  else {
    if (in_stack_0000000c[2] == 0x25) {
      uVar4 = FUN_00406268(DAT_0068f1b0);
      cVar1 = FUN_004061f8(uVar4,&PTR_FUN_004a48d4);
      if (cVar1 != '\0') {
        iVar2 = FUN_004950a8(0);
        goto LAB_0049534d;
      }
    }
    iVar2 = 0;
  }
LAB_0049534d:
  if (iVar2 != 0) {
    local_1c = 0;
    local_18 = 0;
    FUN_004bb054(iVar2,&local_1c,&local_10);
  }
LAB_004953aa:
  if (((((iVar2 != 0) && (cVar1 = FUN_004061f8(iVar2,&PTR_LAB_00488b04), cVar1 != '\0')) &&
       (iVar5 = FUN_00490580(iVar2), iVar5 != DAT_0068f1ac)) &&
      ((*(char *)(iVar2 + 0x1b3) != '\0' && (*(int *)(iVar2 + 0x34) != 0)))) &&
     (cVar1 = FUN_004c4988(*(undefined4 *)(iVar2 + 0x34)), cVar1 != '\0')) {
    DAT_0068f1bc = '\x01';
    *(undefined1 *)(DAT_0068f1a4 + 0x350) = 0;
    FUN_00406268(DAT_0068f1a4,iVar2);
    FUN_00406268(DAT_0068f1a4,iVar2);
  }
  return local_8;
}
